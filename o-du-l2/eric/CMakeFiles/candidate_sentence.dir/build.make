# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/mwnl/o-ran_project/o-du-l2

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/mwnl/o-ran_project/o-du-l2/eric

# Include any dependencies generated for this target.
include CMakeFiles/candidate_sentence.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/candidate_sentence.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/candidate_sentence.dir/flags.make

CMakeFiles/candidate_sentence.dir/candidate_sentence.c.o: CMakeFiles/candidate_sentence.dir/flags.make
CMakeFiles/candidate_sentence.dir/candidate_sentence.c.o: ../candidate_sentence.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/mwnl/o-ran_project/o-du-l2/eric/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/candidate_sentence.dir/candidate_sentence.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/candidate_sentence.dir/candidate_sentence.c.o   -c /home/mwnl/o-ran_project/o-du-l2/candidate_sentence.c

CMakeFiles/candidate_sentence.dir/candidate_sentence.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/candidate_sentence.dir/candidate_sentence.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/mwnl/o-ran_project/o-du-l2/candidate_sentence.c > CMakeFiles/candidate_sentence.dir/candidate_sentence.c.i

CMakeFiles/candidate_sentence.dir/candidate_sentence.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/candidate_sentence.dir/candidate_sentence.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/mwnl/o-ran_project/o-du-l2/candidate_sentence.c -o CMakeFiles/candidate_sentence.dir/candidate_sentence.c.s

# Object files for target candidate_sentence
candidate_sentence_OBJECTS = \
"CMakeFiles/candidate_sentence.dir/candidate_sentence.c.o"

# External object files for target candidate_sentence
candidate_sentence_EXTERNAL_OBJECTS =

candidate_sentence: CMakeFiles/candidate_sentence.dir/candidate_sentence.c.o
candidate_sentence: CMakeFiles/candidate_sentence.dir/build.make
candidate_sentence: CMakeFiles/candidate_sentence.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/mwnl/o-ran_project/o-du-l2/eric/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable candidate_sentence"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/candidate_sentence.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/candidate_sentence.dir/build: candidate_sentence

.PHONY : CMakeFiles/candidate_sentence.dir/build

CMakeFiles/candidate_sentence.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/candidate_sentence.dir/cmake_clean.cmake
.PHONY : CMakeFiles/candidate_sentence.dir/clean

CMakeFiles/candidate_sentence.dir/depend:
	cd /home/mwnl/o-ran_project/o-du-l2/eric && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/mwnl/o-ran_project/o-du-l2 /home/mwnl/o-ran_project/o-du-l2 /home/mwnl/o-ran_project/o-du-l2/eric /home/mwnl/o-ran_project/o-du-l2/eric /home/mwnl/o-ran_project/o-du-l2/eric/CMakeFiles/candidate_sentence.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/candidate_sentence.dir/depend
