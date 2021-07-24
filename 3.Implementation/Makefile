PROJ_NAME = holidayapp
TEST_PROJ_NAME = Test_$(PROJ_NAME)

BUILD_DIR = Build

SRC = src/busticket.c\
src/foodorder.c\
src/hotelbooking.c\
src/movie.c\
src/railway.c


TEST_SRC = test/test.c

INC = -Iinc

$(BUILD_DIR):
	mkdir $(BUILD_DIR)

#To check if the OS is Windows or Linux and set the executable file extension and delete command accordingly
ifdef OS
   RM = del /q
   FixPath = $(subst /,\,$1)
   EXEC = exe
else
   ifeq ($(shell uname), Linux)
      RM = rm -rf
      FixPath = $1
	  	EXEC = out
   endif
endif

# Makefile will not run target command if the name with file already exists. To override, use .PHONY
.PHONY : all test coverage run clean doc

all:$(BUILD_DIR)
	gcc holiday.c $(SRC) $(INC) -o $(call FixPath,$(BUILD_DIR)/$(PROJ_NAME).$(EXEC))

run: all
	$(call FixPath,$(BUILD_DIR)/$(PROJ_NAME).$(EXEC))

test: $(SRC) $(TEST_SRC)
	gcc $^ $(INC) unity/unity.c -Iunity -o $(call FixPath,$(BUILD_DIR)/$(TEST_PROJ_NAME).$(EXEC))
	$(call FixPath,$(BUILD_DIR)/$(TEST_PROJ_NAME).$(EXEC))

coverage:$(PROJ_NAME)
	gcc -fprofile-arcs -ftest-coverage -fPIC $(SRC) $(TEST_SRC) $(INC) -o $(call FixPath,$(BUILD_DIR)/$(TEST_PROJ_NAME).$(EXEC))
	$(call FixPath,$(BUILD_DIR)/$(TEST_PROJ_NAME).$(EXEC))
	gcov -abcfu $(SRC)
	gcov -r

doc:
	make -C Documentation

clean:
	rm -rf $(call FixPath,$(BUILD_DIR)/*)
	make -C Documentation clean
	rm -rf *.gcno

