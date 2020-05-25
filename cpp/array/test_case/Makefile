OUTPUT_DIR="./output"

all:
	mkdir -p $(OUTPUT_DIR)
	g++ -std=c++11 -I../ test_array_default_constructor.cpp -o $(OUTPUT_DIR)/test_array_default_constructor
	g++ -std=c++11 -I../ test_array_constructor_with_initializer_list.cpp -o $(OUTPUT_DIR)/test_array_constructor_with_initializer_list
	g++ -std=c++11 -I../ test_array_size.cpp -o $(OUTPUT_DIR)/test_array_size
	g++ -std=c++11 -I../ test_array_empty.cpp -o $(OUTPUT_DIR)/test_array_empty
	g++ -std=c++11 -I../ test_array_operator[].cpp -o $(OUTPUT_DIR)/test_array_operator[]
	g++ -std=c++11 -I../ test_array_front.cpp -o $(OUTPUT_DIR)/test_array_front
	g++ -std=c++11 -I../ test_array_back.cpp -o $(OUTPUT_DIR)/test_array_back
	g++ -std=c++11 -I../ test_array_data.cpp -o $(OUTPUT_DIR)/test_array_data
	g++ -std=c++11 -I../ test_array_fill.cpp -o $(OUTPUT_DIR)/test_array_fill
	g++ -std=c++11 -I../ test_array_swap.cpp -o $(OUTPUT_DIR)/test_array_swap
	g++ -std=c++11 -I../ test_array_iterator.cpp -o $(OUTPUT_DIR)/test_array_iterator
        
clean:
	rm -rf $(OUTPUT_DIR)
