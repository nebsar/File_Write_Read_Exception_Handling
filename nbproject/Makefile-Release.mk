#
# Generated Makefile - do not edit!
#
# Edit the Makefile in the project folder instead (../Makefile). Each target
# has a -pre and a -post target defined where you can add customized code.
#
# This makefile implements configuration specific macros and targets.


# Environment
MKDIR=mkdir
CP=cp
GREP=grep
NM=nm
CCADMIN=CCadmin
RANLIB=ranlib
CC=gcc
CCC=g++
CXX=g++
FC=gfortran
AS=as

# Macros
CND_PLATFORM=Cygwin-Windows
CND_DLIB_EXT=dll
CND_CONF=Release
CND_DISTDIR=dist
CND_BUILDDIR=build

# Include project Makefile
include Makefile

# Object Directory
OBJECTDIR=${CND_BUILDDIR}/${CND_CONF}/${CND_PLATFORM}

# Object Files
OBJECTFILES= \
	${OBJECTDIR}/Read_File_Line_by_Line_With_Exception_Handling.o \
	${OBJECTDIR}/Read_File_With_Exception_Handling_Static_Function.o \
	${OBJECTDIR}/SeekG.o \
	${OBJECTDIR}/Word_by_Word_File_Read.o \
	${OBJECTDIR}/Write_And_Read_File.o \
	${OBJECTDIR}/main.o


# C Compiler Flags
CFLAGS=

# CC Compiler Flags
CCFLAGS=
CXXFLAGS=

# Fortran Compiler Flags
FFLAGS=

# Assembler Flags
ASFLAGS=

# Link Libraries and Options
LDLIBSOPTIONS=

# Build Targets
.build-conf: ${BUILD_SUBPROJECTS}
	"${MAKE}"  -f nbproject/Makefile-${CND_CONF}.mk ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/files_and_streams_with_exception_handler_and_static_function.exe

${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/files_and_streams_with_exception_handler_and_static_function.exe: ${OBJECTFILES}
	${MKDIR} -p ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}
	${LINK.cc} -o ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/files_and_streams_with_exception_handler_and_static_function ${OBJECTFILES} ${LDLIBSOPTIONS}

${OBJECTDIR}/Read_File_Line_by_Line_With_Exception_Handling.o: Read_File_Line_by_Line_With_Exception_Handling.cpp
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Read_File_Line_by_Line_With_Exception_Handling.o Read_File_Line_by_Line_With_Exception_Handling.cpp

${OBJECTDIR}/Read_File_With_Exception_Handling_Static_Function.o: Read_File_With_Exception_Handling_Static_Function.cpp
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Read_File_With_Exception_Handling_Static_Function.o Read_File_With_Exception_Handling_Static_Function.cpp

${OBJECTDIR}/SeekG.o: SeekG.cpp
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/SeekG.o SeekG.cpp

${OBJECTDIR}/Word_by_Word_File_Read.o: Word_by_Word_File_Read.cpp
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Word_by_Word_File_Read.o Word_by_Word_File_Read.cpp

${OBJECTDIR}/Write_And_Read_File.o: Write_And_Read_File.cpp
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Write_And_Read_File.o Write_And_Read_File.cpp

${OBJECTDIR}/main.o: main.cpp
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/main.o main.cpp

# Subprojects
.build-subprojects:

# Clean Targets
.clean-conf: ${CLEAN_SUBPROJECTS}
	${RM} -r ${CND_BUILDDIR}/${CND_CONF}

# Subprojects
.clean-subprojects:

# Enable dependency checking
.dep.inc: .depcheck-impl

include .dep.inc
