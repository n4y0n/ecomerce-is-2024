build: generate
	cmake --build build

generate: CMakeLists.txt
	rm build/CMakeCache.txt; cmake -S . -B build

clean:
	rm -fr build bin .cache *.out *.exe *.lib *.exp
