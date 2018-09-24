################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Fecha.cpp \
../src/TarjetaSube.cpp \
../src/Viaje.cpp \
../src/catedra_juarez_20-09-18.cpp 

OBJS += \
./src/Fecha.o \
./src/TarjetaSube.o \
./src/Viaje.o \
./src/catedra_juarez_20-09-18.o 

CPP_DEPS += \
./src/Fecha.d \
./src/TarjetaSube.d \
./src/Viaje.d \
./src/catedra_juarez_20-09-18.d 


# Each subdirectory must supply rules for building sources it contributes
src/Fecha.o: ../src/Fecha.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -std=c++0x -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"src/Fecha.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

src/%.o: ../src/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


