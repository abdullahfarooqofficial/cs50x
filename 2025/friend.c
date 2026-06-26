#include <stdio.h>
#include <cs50.h>

int main(void)
{
    // Name
    string Name = get_string("Your name : ");
    printf("Name : %s \n", Name);
    // Age
    int Age = get_int("Your age : ");
    printf("Age : %i \n", Age);
    //Home Town
    string Home_Town = get_string("Homw Town : ");
    printf("Home Town : %s \n", Home_Town);
    // Phone
    string Phone = get_string("You contact : ");
    printf("Phone : %s \n", Phone);

    printf("My friend's name is %s and her age is %i She is from %s and her Phone number is %s",Name, Age , Home_Town, Phone);

}
