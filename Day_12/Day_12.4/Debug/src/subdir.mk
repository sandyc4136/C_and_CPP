################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Employee.cpp \
../src/Main.cpp \
../src/Person.cpp 

CPP_DEPS += \
./src/Employee.d \
./src/Main.d \
./src/Person.d 

OBJS += \
./src/Employee.o \
./src/Main.o \
./src/Person.o 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp src/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


clean: clean-src

clean-src:
	-$(RM) ./src/Employee.d ./src/Employee.o ./src/Main.d ./src/Main.o ./src/Person.d ./src/Person.o

.PHONY: clean-src

