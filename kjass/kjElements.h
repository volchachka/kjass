namespace KingJass {

    struct Type
    {
        char*   name[255];
        Type*   domain;
    };
    
    struct Variable
    {
        char*   name[255];
        Type*   typeOf;
    };

    struct Function {
        char*       name[255];
        Type*       typeOf;
        Variable**  args;
        size_t      agrc;
    };

    /*
        branch TestBranch {
            integer Counts = 0x0;
        }
    */
    struct Branch
    {
        char* name[255];
        Variable** branchVariables;
    };
    
}