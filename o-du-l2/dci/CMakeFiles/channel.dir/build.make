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
CMAKE_SOURCE_DIR = /home/eric/semantic/o-du-l2

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/eric/semantic/o-du-l2/dci

# Include any dependencies generated for this target.
include CMakeFiles/channel.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/channel.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/channel.dir/flags.make

CMakeFiles/channel.dir/channel.c.o: CMakeFiles/channel.dir/flags.make
CMakeFiles/channel.dir/channel.c.o: ../channel.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/eric/semantic/o-du-l2/dci/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/channel.dir/channel.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/channel.dir/channel.c.o   -c /home/eric/semantic/o-du-l2/channel.c

CMakeFiles/channel.dir/channel.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/channel.dir/channel.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/eric/semantic/o-du-l2/channel.c > CMakeFiles/channel.dir/channel.c.i

CMakeFiles/channel.dir/channel.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/channel.dir/channel.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/eric/semantic/o-du-l2/channel.c -o CMakeFiles/channel.dir/channel.c.s

# Object files for target channel
channel_OBJECTS = \
"CMakeFiles/channel.dir/channel.c.o"

# External object files for target channel
channel_EXTERNAL_OBJECTS =

channel: CMakeFiles/channel.dir/channel.c.o
channel: CMakeFiles/channel.dir/build.make
channel: /usr/lib/x86_64-linux-gnu/libpython3.8.so
channel: CMakeFiles/channel.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/eric/semantic/o-du-l2/dci/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable channel"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/channel.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/channel.dir/build: channel

.PHONY : CMakeFiles/channel.dir/build

CMakeFiles/channel.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/channel.dir/cmake_clean.cmake
.PHONY : CMakeFiles/channel.dir/clean

CMakeFiles/channel.dir/depend:
	cd /home/eric/semantic/o-du-l2/dci && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/eric/semantic/o-du-l2 /home/eric/semantic/o-du-l2 /home/eric/semantic/o-du-l2/dci /home/eric/semantic/o-du-l2/dci /home/eric/semantic/o-du-l2/dci/CMakeFiles/channel.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/channel.dir/depend

