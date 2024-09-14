# MAKEFLAGS += -s

.SUFFIXES:

CXX := g++
CC := g++

CXXFLAGS += -std=c++20 -Wall

# BUILD_DIR := $(PWD)/build
BUILD_DIR := ./build

%: $(BUILD_DIR)/%
	@echo "-----PROGRAM OUTPUT-----"
	@$(BUILD_DIR)/$@
	@echo "\n------------------------"

$(BUILD_DIR)/%: $(BUILD_DIR)/%.o
	$(CC) $(LDFLAGS) $^ $(LDLIBS) -o $@

$(BUILD_DIR)/%.o: ./%.cpp $(BUILD_DIR)
	$(CXX) -c $(CPPFLAGS) $(CXXFLAGS) $? -o $@

$(BUILD_DIR):
	mkdir $(BUILD_DIR)

.PHONY: clean
clean:
	rm -rf ./build

