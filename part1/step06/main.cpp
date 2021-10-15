#include "get_input.h"
#include "process_input.h"
#include "show_result.h"

int main(){
    auto input = get_input();
    auto result = process_input(input);
    show_result(result);

    return 0;
}