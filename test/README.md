cd ..

cmake -E make_directory build

cd build

cmake -GNinja .. -DCMAKE_BUILD_TYPE=Release

sudo apt install ninja

wget https://apt.llvm.org/llvm.sh

chmod +x llvm.sh

sudo ./llvm.sh 13

sudo update-alternatives --install /usr/bin/clang++ clang++ /usr/bin/clang++-13 200

cmake --build .

ctest

src/clauf --help

src/clauf ../tests/integration/if.c

src/clauf ../test/t01.c

time src/clauf ../test/fib.c

6.5s

time luajit ../test/fib.lua

0.8s

time luajit -joff ../test/fib.lua

4.5s