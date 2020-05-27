#ifndef QAAPPDEF_H
#define QAAPPDEF_H
#include <string>

enum question_type
{
    question_choice,
    question_qa,
};

typedef struct tagQuestion
{
    question_type type;
    std::string question;
    std::string answer;
}Question;

#endif // QAAPPDEF_H
