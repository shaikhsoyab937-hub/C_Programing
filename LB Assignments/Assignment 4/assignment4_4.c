#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////////
/*
    Function Name : CheckVotingEligibility
    Input         : Age (Integer)
    Output        : Eligible, Not Eligible or Invalid Age
    Description   : Checks whether a person is eligible to vote.
    Date          : 22/10/2026
    Author        : Soyab Nijam Shaikh
*/
////////////////////////////////////////////////////////////////

void CheckVotingEligibility(int iAge)
{
    if(iAge < 0)
    {
        printf("Invalid Age");
    }
    else if(iAge >= 18)
    {
        printf("Eligible for Voting");
    }
    else
    {
        printf("Not Eligible for Voting");
    }
}

int main()
{
    int iAge = 0;

    printf("Enter your age: ");
    scanf("%d", &iAge);

    CheckVotingEligibility(iAge);

    return EXIT_SUCCESS;
}