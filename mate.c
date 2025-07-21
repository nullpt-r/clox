#define MATE_IMPLEMENTATION
#include "mate.h"

i32 main()
{
    StartBuild();
    {
        Executable executable = CreateExecutable((ExecutableOptions){
            .output = "clox",
            .flags = "-Wall -g"});

        AddFile(executable, "./src/main.c");
        AddFile(executable, "./src/chunk.c");
        AddFile(executable, "./src/memory.c");
        AddFile(executable, "./src/debug.c");
        AddFile(executable, "./src/value.c");
        AddFile(executable, "./src/vm.c");
        AddFile(executable, "./src/compiler.c");
        AddFile(executable, "./src/scanner.c");

        InstallExecutable(executable);
    }
    EndBuild();
}