#!/bin/bash

# Exit on any command error
set -e

# Load .env
export $(cat .env | xargs)

echo WASI_SDK_PATH=${WASI_SDK_PATH}
echo TOOLS_PATH=$TOOLS_PATH

mkdir -p ./build

rm -f ./build/*.wasm
rm -f ./build/*.wat

echo \~ Building
cmake --toolchain ${WASI_SDK_PATH}/share/cmake/wasi-sdk.cmake -Bbuild -DCMAKE_BUILD_TYPE=Release
( cd ./build && make )

# Downloaded by prototool or manually specified.
echo \~ Running wasm-opt on ./build/fleet.wasm
"$TOOLS_PATH/binaryen/bin/wasm-opt" ./build/fleet.wasm -o ./build/fleet.wasm --strip-dwarf --asyncify --enable-simd --enable-bulk-memory -O0 -g

echo
