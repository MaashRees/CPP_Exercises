# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.26

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/local/lib/python3.9/dist-packages/cmake/data/bin/cmake

# The command to remove a file.
RM = /usr/local/lib/python3.9/dist-packages/cmake/data/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/2inf1/mensahassiakol/Documents/C++/CPP_Exercises/tp6

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/2inf1/mensahassiakol/Documents/C++/CPP_Exercises/tp6/build

# Include any dependencies generated for this target.
include CMakeFiles/tp6-ex1.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/tp6-ex1.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/tp6-ex1.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/tp6-ex1.dir/flags.make

CMakeFiles/tp6-ex1.dir/1-recipes/main.cpp.o: CMakeFiles/tp6-ex1.dir/flags.make
CMakeFiles/tp6-ex1.dir/1-recipes/main.cpp.o: /home/2inf1/mensahassiakol/Documents/C++/CPP_Exercises/tp6/1-recipes/main.cpp
CMakeFiles/tp6-ex1.dir/1-recipes/main.cpp.o: CMakeFiles/tp6-ex1.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/2inf1/mensahassiakol/Documents/C++/CPP_Exercises/tp6/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/tp6-ex1.dir/1-recipes/main.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/tp6-ex1.dir/1-recipes/main.cpp.o -MF CMakeFiles/tp6-ex1.dir/1-recipes/main.cpp.o.d -o CMakeFiles/tp6-ex1.dir/1-recipes/main.cpp.o -c /home/2inf1/mensahassiakol/Documents/C++/CPP_Exercises/tp6/1-recipes/main.cpp

CMakeFiles/tp6-ex1.dir/1-recipes/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/tp6-ex1.dir/1-recipes/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/2inf1/mensahassiakol/Documents/C++/CPP_Exercises/tp6/1-recipes/main.cpp > CMakeFiles/tp6-ex1.dir/1-recipes/main.cpp.i

CMakeFiles/tp6-ex1.dir/1-recipes/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/tp6-ex1.dir/1-recipes/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/2inf1/mensahassiakol/Documents/C++/CPP_Exercises/tp6/1-recipes/main.cpp -o CMakeFiles/tp6-ex1.dir/1-recipes/main.cpp.s

CMakeFiles/tp6-ex1.dir/1-recipes/ProgramData.cpp.o: CMakeFiles/tp6-ex1.dir/flags.make
CMakeFiles/tp6-ex1.dir/1-recipes/ProgramData.cpp.o: /home/2inf1/mensahassiakol/Documents/C++/CPP_Exercises/tp6/1-recipes/ProgramData.cpp
CMakeFiles/tp6-ex1.dir/1-recipes/ProgramData.cpp.o: CMakeFiles/tp6-ex1.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/2inf1/mensahassiakol/Documents/C++/CPP_Exercises/tp6/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/tp6-ex1.dir/1-recipes/ProgramData.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/tp6-ex1.dir/1-recipes/ProgramData.cpp.o -MF CMakeFiles/tp6-ex1.dir/1-recipes/ProgramData.cpp.o.d -o CMakeFiles/tp6-ex1.dir/1-recipes/ProgramData.cpp.o -c /home/2inf1/mensahassiakol/Documents/C++/CPP_Exercises/tp6/1-recipes/ProgramData.cpp

CMakeFiles/tp6-ex1.dir/1-recipes/ProgramData.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/tp6-ex1.dir/1-recipes/ProgramData.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/2inf1/mensahassiakol/Documents/C++/CPP_Exercises/tp6/1-recipes/ProgramData.cpp > CMakeFiles/tp6-ex1.dir/1-recipes/ProgramData.cpp.i

CMakeFiles/tp6-ex1.dir/1-recipes/ProgramData.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/tp6-ex1.dir/1-recipes/ProgramData.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/2inf1/mensahassiakol/Documents/C++/CPP_Exercises/tp6/1-recipes/ProgramData.cpp -o CMakeFiles/tp6-ex1.dir/1-recipes/ProgramData.cpp.s

# Object files for target tp6-ex1
tp6__ex1_OBJECTS = \
"CMakeFiles/tp6-ex1.dir/1-recipes/main.cpp.o" \
"CMakeFiles/tp6-ex1.dir/1-recipes/ProgramData.cpp.o"

# External object files for target tp6-ex1
tp6__ex1_EXTERNAL_OBJECTS =

tp6-ex1: CMakeFiles/tp6-ex1.dir/1-recipes/main.cpp.o
tp6-ex1: CMakeFiles/tp6-ex1.dir/1-recipes/ProgramData.cpp.o
tp6-ex1: CMakeFiles/tp6-ex1.dir/build.make
tp6-ex1: CMakeFiles/tp6-ex1.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/2inf1/mensahassiakol/Documents/C++/CPP_Exercises/tp6/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable tp6-ex1"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/tp6-ex1.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/tp6-ex1.dir/build: tp6-ex1
.PHONY : CMakeFiles/tp6-ex1.dir/build

CMakeFiles/tp6-ex1.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/tp6-ex1.dir/cmake_clean.cmake
.PHONY : CMakeFiles/tp6-ex1.dir/clean

CMakeFiles/tp6-ex1.dir/depend:
	cd /home/2inf1/mensahassiakol/Documents/C++/CPP_Exercises/tp6/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/2inf1/mensahassiakol/Documents/C++/CPP_Exercises/tp6 /home/2inf1/mensahassiakol/Documents/C++/CPP_Exercises/tp6 /home/2inf1/mensahassiakol/Documents/C++/CPP_Exercises/tp6/build /home/2inf1/mensahassiakol/Documents/C++/CPP_Exercises/tp6/build /home/2inf1/mensahassiakol/Documents/C++/CPP_Exercises/tp6/build/CMakeFiles/tp6-ex1.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/tp6-ex1.dir/depend

