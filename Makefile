build: generate
	cmake --build build --config Debug

generate: CMakeLists.txt
	rm build/CMakeCache.txt; cmake -S . -B build -DCMAKE_BUILD_TYPE=Debug

clean:
	rm -fr build bin .cache *.out *.exe *.lib *.exp
