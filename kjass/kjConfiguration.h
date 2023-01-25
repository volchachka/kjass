namespace KingJass {

    /*
            In KingJass a Directive
            code: {
                @directive debug 

                @if debug | 0x1 | 0x2 | 0x4 | 0x8 | 0x10 @ {

                }
            }
            Presence of this directive enables debug mode 
            Directive enables the mode matching to it.
    */
    namespace Directive {
        static const char Token         [] = "directive";
        static const char ShortToken    [] = "dir";

        static const char Debug         [] = "debug";
        static const char AutoLogger    [] = "autolog";
        static const char Exceptions    [] = "except";
        static const char Optimization  [] = "optimize";

        enum Flags { DEBUG = 0, AUTOLOG = 2, EXCEPTIONS = 4, OPTIMIZATIONS = 8  };
        
    }

    namespace Parser {
        const char Function     [] = "function";
        const char Takes        [] = "takes";
        const char Returns      [] = "returns";
        const char EndFunction  [] = "endfunction";
        const char Array        [] = "array";
        const char Type         [] = "type";
        const char Extends      [] = "extends";
        const char Native       [] = "native";
        const char If           [] = "if";
        const char Endif        [] = "endif";
        const char ElseIf       [] = "elseif";
        const char Else         [] = "else";
        const char Then         [] = "then";
        const char Loop         [] = "loop";
        const char EndLoop      [] = "endloop";
        const char Break        [] = "exitwhen true";
        const char BreakIf      [] = "exitwhen";
        const char Integer      [] = "integer";
        const char Real         [] = "real";
        const char Boolean      [] = "boolean";
        const char Boolean      [] = "constant";
        const char Call         [] = "call";
        const char Hashtable    [] = "hashtanle";
        const char HashAllocate [] = "InitHashtable()";
    }

    namespace KeyWord {
        const char Nix      []           = "nix";
        const char Int      []           = "int";
        const char Float    []           = "float";
        const char Bool     []           = "bool";
        const char Import   []           = "import";
        const char Engine   []           = "engine";
        const char File     []           = "file";
        const char Type     []           = "type";
        const char Const    []           = "const";
        const char Static   []           = "static";
        const char Class    []           = "class";
        const char Struct   []           = "struct";
        const char Branch   []           = "branch";
        const char VarList  []           = "varlist";
        const char Hash     []           = "hash";
    }

    namespace ParseToken {
        const char String           = '\"';
        const char Directive        = '@';
        const char ScopeOpen        = '{';
        const char ScopeClose       = '}';
        const char CommentSingle    = '#';
        const char CommentOpen[]    = "#<";
        const char CommentClose[]   = ">#";
        const char BraceOpen        = '(';
        const char BraceClose       = ')';
        const char Semicolon        = ';';
        const char RawCode[]        = "0r";
        const char Hex[]            = "0x";
        const char SquareOpen       = '[';
        const char SquareClose      = ']';
    }


    enum ParseTokenType {
        StringOpen     = 0x0,
        StringClose    = 0x2,
        ScopeOpen      = 0x4,
        ScopeClose     = 0x8,
        CommentSingle  = 0x10,
        CommentOpen    = 0x20,
        CommentClose   = 0x40,
        Directive      = 0x80,
        BraceOpen      = 0x100,
        BraceClose     = 0x200,
        Semicolon      = 0x400,
        Hex            = 0x800,
        RawCode        = 0x1000,
        SquareOpen     = 0x2000,
        SquarClose     = 0x4000
    };

    enum Config {
        Succeful       = 0x0,
        ErrorLine      = 0x2,
        ErrorFile      = 0x4,
        AccessDenied   = 0x8

    };
    
}