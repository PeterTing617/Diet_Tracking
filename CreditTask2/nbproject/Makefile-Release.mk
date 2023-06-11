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
CND_PLATFORM=MinGW-Windows
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
	${OBJECTDIR}/DayMeal.o \
	${OBJECTDIR}/DietTracking.o \
	${OBJECTDIR}/Exercise.o \
	${OBJECTDIR}/ExerciseTracking.o \
	${OBJECTDIR}/Freestyle.o \
	${OBJECTDIR}/Meal.o \
	${OBJECTDIR}/MonthBurnt.o \
	${OBJECTDIR}/MonthConsumed.o \
	${OBJECTDIR}/Nutrition.o \
	${OBJECTDIR}/NutritionManagement.o \
	${OBJECTDIR}/Running.o \
	${OBJECTDIR}/User.o \
	${OBJECTDIR}/Walking.o \
	${OBJECTDIR}/main.o

# Test Directory
TESTDIR=${CND_BUILDDIR}/${CND_CONF}/${CND_PLATFORM}/tests

# Test Files
TESTFILES= \
	${TESTDIR}/TestFiles/f2 \
	${TESTDIR}/TestFiles/f3 \
	${TESTDIR}/TestFiles/f1

# Test Object Files
TESTOBJECTFILES= \
	${TESTDIR}/TestDietTracking.o \
	${TESTDIR}/TestDietTrackingrunner.o \
	${TESTDIR}/TestExerciseTracking.o \
	${TESTDIR}/TestExerciseTrackingrunner.o \
	${TESTDIR}/TestNutrition.o \
	${TESTDIR}/TestNutritionrunner.o

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
	"${MAKE}"  -f nbproject/Makefile-${CND_CONF}.mk ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/credittask2.exe

${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/credittask2.exe: ${OBJECTFILES}
	${MKDIR} -p ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}
	${LINK.cc} -o ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/credittask2 ${OBJECTFILES} ${LDLIBSOPTIONS}

${OBJECTDIR}/DayMeal.o: DayMeal.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/DayMeal.o DayMeal.cpp

${OBJECTDIR}/DietTracking.o: DietTracking.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/DietTracking.o DietTracking.cpp

${OBJECTDIR}/Exercise.o: Exercise.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Exercise.o Exercise.cpp

${OBJECTDIR}/ExerciseTracking.o: ExerciseTracking.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/ExerciseTracking.o ExerciseTracking.cpp

${OBJECTDIR}/Freestyle.o: Freestyle.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Freestyle.o Freestyle.cpp

${OBJECTDIR}/Meal.o: Meal.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Meal.o Meal.cpp

${OBJECTDIR}/MonthBurnt.o: MonthBurnt.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/MonthBurnt.o MonthBurnt.cpp

${OBJECTDIR}/MonthConsumed.o: MonthConsumed.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/MonthConsumed.o MonthConsumed.cpp

${OBJECTDIR}/Nutrition.o: Nutrition.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Nutrition.o Nutrition.cpp

${OBJECTDIR}/NutritionManagement.o: NutritionManagement.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/NutritionManagement.o NutritionManagement.cpp

${OBJECTDIR}/Running.o: Running.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Running.o Running.cpp

${OBJECTDIR}/User.o: User.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/User.o User.cpp

${OBJECTDIR}/Walking.o: Walking.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Walking.o Walking.cpp

${OBJECTDIR}/main.o: main.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/main.o main.cpp

# Subprojects
.build-subprojects:

# Build Test Targets
.build-tests-conf: .build-tests-subprojects .build-conf ${TESTFILES}
.build-tests-subprojects:

${TESTDIR}/TestFiles/f2: ${TESTDIR}/TestDietTracking.o ${TESTDIR}/TestDietTrackingrunner.o ${OBJECTFILES:%.o=%_nomain.o}
	${MKDIR} -p ${TESTDIR}/TestFiles
	${LINK.cc}   -o ${TESTDIR}/TestFiles/f2 $^ ${LDLIBSOPTIONS} `cppunit-config --libs`   

${TESTDIR}/TestFiles/f3: ${TESTDIR}/TestExerciseTracking.o ${TESTDIR}/TestExerciseTrackingrunner.o ${OBJECTFILES:%.o=%_nomain.o}
	${MKDIR} -p ${TESTDIR}/TestFiles
	${LINK.cc}   -o ${TESTDIR}/TestFiles/f3 $^ ${LDLIBSOPTIONS} `cppunit-config --libs`   

${TESTDIR}/TestFiles/f1: ${TESTDIR}/TestNutrition.o ${TESTDIR}/TestNutritionrunner.o ${OBJECTFILES:%.o=%_nomain.o}
	${MKDIR} -p ${TESTDIR}/TestFiles
	${LINK.cc}   -o ${TESTDIR}/TestFiles/f1 $^ ${LDLIBSOPTIONS} `cppunit-config --libs`   


${TESTDIR}/TestDietTracking.o: TestDietTracking.cpp 
	${MKDIR} -p ${TESTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 `cppunit-config --cflags` -MMD -MP -MF "$@.d" -o ${TESTDIR}/TestDietTracking.o TestDietTracking.cpp


${TESTDIR}/TestDietTrackingrunner.o: TestDietTrackingrunner.cpp 
	${MKDIR} -p ${TESTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 `cppunit-config --cflags` -MMD -MP -MF "$@.d" -o ${TESTDIR}/TestDietTrackingrunner.o TestDietTrackingrunner.cpp


${TESTDIR}/TestExerciseTracking.o: TestExerciseTracking.cpp 
	${MKDIR} -p ${TESTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 `cppunit-config --cflags` -MMD -MP -MF "$@.d" -o ${TESTDIR}/TestExerciseTracking.o TestExerciseTracking.cpp


${TESTDIR}/TestExerciseTrackingrunner.o: TestExerciseTrackingrunner.cpp 
	${MKDIR} -p ${TESTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 `cppunit-config --cflags` -MMD -MP -MF "$@.d" -o ${TESTDIR}/TestExerciseTrackingrunner.o TestExerciseTrackingrunner.cpp


${TESTDIR}/TestNutrition.o: TestNutrition.cpp 
	${MKDIR} -p ${TESTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 `cppunit-config --cflags` -MMD -MP -MF "$@.d" -o ${TESTDIR}/TestNutrition.o TestNutrition.cpp


${TESTDIR}/TestNutritionrunner.o: TestNutritionrunner.cpp 
	${MKDIR} -p ${TESTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 `cppunit-config --cflags` -MMD -MP -MF "$@.d" -o ${TESTDIR}/TestNutritionrunner.o TestNutritionrunner.cpp


${OBJECTDIR}/DayMeal_nomain.o: ${OBJECTDIR}/DayMeal.o DayMeal.cpp 
	${MKDIR} -p ${OBJECTDIR}
	@NMOUTPUT=`${NM} ${OBJECTDIR}/DayMeal.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -O2 -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/DayMeal_nomain.o DayMeal.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/DayMeal.o ${OBJECTDIR}/DayMeal_nomain.o;\
	fi

${OBJECTDIR}/DietTracking_nomain.o: ${OBJECTDIR}/DietTracking.o DietTracking.cpp 
	${MKDIR} -p ${OBJECTDIR}
	@NMOUTPUT=`${NM} ${OBJECTDIR}/DietTracking.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -O2 -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/DietTracking_nomain.o DietTracking.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/DietTracking.o ${OBJECTDIR}/DietTracking_nomain.o;\
	fi

${OBJECTDIR}/Exercise_nomain.o: ${OBJECTDIR}/Exercise.o Exercise.cpp 
	${MKDIR} -p ${OBJECTDIR}
	@NMOUTPUT=`${NM} ${OBJECTDIR}/Exercise.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -O2 -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Exercise_nomain.o Exercise.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/Exercise.o ${OBJECTDIR}/Exercise_nomain.o;\
	fi

${OBJECTDIR}/ExerciseTracking_nomain.o: ${OBJECTDIR}/ExerciseTracking.o ExerciseTracking.cpp 
	${MKDIR} -p ${OBJECTDIR}
	@NMOUTPUT=`${NM} ${OBJECTDIR}/ExerciseTracking.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -O2 -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/ExerciseTracking_nomain.o ExerciseTracking.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/ExerciseTracking.o ${OBJECTDIR}/ExerciseTracking_nomain.o;\
	fi

${OBJECTDIR}/Freestyle_nomain.o: ${OBJECTDIR}/Freestyle.o Freestyle.cpp 
	${MKDIR} -p ${OBJECTDIR}
	@NMOUTPUT=`${NM} ${OBJECTDIR}/Freestyle.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -O2 -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Freestyle_nomain.o Freestyle.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/Freestyle.o ${OBJECTDIR}/Freestyle_nomain.o;\
	fi

${OBJECTDIR}/Meal_nomain.o: ${OBJECTDIR}/Meal.o Meal.cpp 
	${MKDIR} -p ${OBJECTDIR}
	@NMOUTPUT=`${NM} ${OBJECTDIR}/Meal.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -O2 -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Meal_nomain.o Meal.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/Meal.o ${OBJECTDIR}/Meal_nomain.o;\
	fi

${OBJECTDIR}/MonthBurnt_nomain.o: ${OBJECTDIR}/MonthBurnt.o MonthBurnt.cpp 
	${MKDIR} -p ${OBJECTDIR}
	@NMOUTPUT=`${NM} ${OBJECTDIR}/MonthBurnt.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -O2 -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/MonthBurnt_nomain.o MonthBurnt.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/MonthBurnt.o ${OBJECTDIR}/MonthBurnt_nomain.o;\
	fi

${OBJECTDIR}/MonthConsumed_nomain.o: ${OBJECTDIR}/MonthConsumed.o MonthConsumed.cpp 
	${MKDIR} -p ${OBJECTDIR}
	@NMOUTPUT=`${NM} ${OBJECTDIR}/MonthConsumed.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -O2 -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/MonthConsumed_nomain.o MonthConsumed.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/MonthConsumed.o ${OBJECTDIR}/MonthConsumed_nomain.o;\
	fi

${OBJECTDIR}/Nutrition_nomain.o: ${OBJECTDIR}/Nutrition.o Nutrition.cpp 
	${MKDIR} -p ${OBJECTDIR}
	@NMOUTPUT=`${NM} ${OBJECTDIR}/Nutrition.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -O2 -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Nutrition_nomain.o Nutrition.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/Nutrition.o ${OBJECTDIR}/Nutrition_nomain.o;\
	fi

${OBJECTDIR}/NutritionManagement_nomain.o: ${OBJECTDIR}/NutritionManagement.o NutritionManagement.cpp 
	${MKDIR} -p ${OBJECTDIR}
	@NMOUTPUT=`${NM} ${OBJECTDIR}/NutritionManagement.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -O2 -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/NutritionManagement_nomain.o NutritionManagement.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/NutritionManagement.o ${OBJECTDIR}/NutritionManagement_nomain.o;\
	fi

${OBJECTDIR}/Running_nomain.o: ${OBJECTDIR}/Running.o Running.cpp 
	${MKDIR} -p ${OBJECTDIR}
	@NMOUTPUT=`${NM} ${OBJECTDIR}/Running.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -O2 -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Running_nomain.o Running.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/Running.o ${OBJECTDIR}/Running_nomain.o;\
	fi

${OBJECTDIR}/User_nomain.o: ${OBJECTDIR}/User.o User.cpp 
	${MKDIR} -p ${OBJECTDIR}
	@NMOUTPUT=`${NM} ${OBJECTDIR}/User.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -O2 -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/User_nomain.o User.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/User.o ${OBJECTDIR}/User_nomain.o;\
	fi

${OBJECTDIR}/Walking_nomain.o: ${OBJECTDIR}/Walking.o Walking.cpp 
	${MKDIR} -p ${OBJECTDIR}
	@NMOUTPUT=`${NM} ${OBJECTDIR}/Walking.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -O2 -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Walking_nomain.o Walking.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/Walking.o ${OBJECTDIR}/Walking_nomain.o;\
	fi

${OBJECTDIR}/main_nomain.o: ${OBJECTDIR}/main.o main.cpp 
	${MKDIR} -p ${OBJECTDIR}
	@NMOUTPUT=`${NM} ${OBJECTDIR}/main.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -O2 -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/main_nomain.o main.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/main.o ${OBJECTDIR}/main_nomain.o;\
	fi

# Run Test Targets
.test-conf:
	@if [ "${TEST}" = "" ]; \
	then  \
	    ${TESTDIR}/TestFiles/f2 || true; \
	    ${TESTDIR}/TestFiles/f3 || true; \
	    ${TESTDIR}/TestFiles/f1 || true; \
	else  \
	    ./${TEST} || true; \
	fi

# Clean Targets
.clean-conf: ${CLEAN_SUBPROJECTS}
	${RM} -r ${CND_BUILDDIR}/${CND_CONF}
	${RM} ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/credittask2.exe

# Subprojects
.clean-subprojects:

# Enable dependency checking
.dep.inc: .depcheck-impl

include .dep.inc
