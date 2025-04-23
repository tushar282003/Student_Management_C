#include <stdio.h>

// Function to calculate total marks
int calculateTotal(int marks[], int n) 
    {
    int total = 0;
    for(int i = 0; i < n; i++) 
    {
        total += marks[i];
    }
    return total;
    }

// Function to calculate average marks
float calculateAverage(int total, int n) 
{
    return (float)total / n;
}

// Function to calculate percentage
float calculatePercentage(int total, int n) 
{
    return ((float)total / (n * 100)) * 100; // Assuming each subject is out of 100
}

// Function to determine grade based on average
char determineGrade(float percentage) 
{
    if (percentage >= 90)
        return 'A';
    else if (percentage >= 75)
        return 'B';
    else if (percentage >= 60)
        return 'C';
    else if (percentage >= 45)
        return 'D';
    else
        return 'F'; // Fail
}

int main() 
    {
    int marks[5];
    int total;
    float average, percentage;
    char grade;

    printf("Enter marks for 5 subjects (out of 100):\n");

    // Input marks
    for(int i = 0; i < 5; i++) 
    {
        printf("Subject %d: ", i + 1);
        scanf("%d", &marks[i]);
    }

    // Calculate total, average, and percentage
    total = calculateTotal(marks, 5);
    average = calculateAverage(total, 5);
    percentage = calculatePercentage(total, 5);
    grade = determineGrade(percentage);

    // Display results
    printf("\n--- Student Report ---\n");
    printf("Total Marks: %d/500\n", total);
    printf("Average Marks: %.2f\n", average);
    printf("Percentage: %.2f%%\n", percentage);
    printf("Grade: %c\n", grade);

    return 0;
    }
