#include<stdio.h>


int switch_lights(int lights) {
    int light_to_switch;
    printf("Enter light to be switched: ");
    scanf("%d", &light_to_switch);

    int num = 1 << light_to_switch - 1;
    lights ^= num;
    return lights;
}


void print_state(int lights) {
    printf("The light is on in rooms:");
    for(int i = 1; i <= 8; i++) {
        int lights_cmp = lights >> i - 1;
        int num_cmp = lights_cmp >> 1;
        num_cmp = num_cmp << 1;
        if(num_cmp != lights_cmp) {
            printf(" %d ", i);
        }
    }
    printf("\n");
}

int main() {
    int lights = 0;
    lights = switch_lights(lights);
    lights = switch_lights(lights);
    lights = switch_lights(lights);
    lights = switch_lights(lights);
    print_state(lights);
    lights = switch_lights(lights);
    print_state(lights);
}