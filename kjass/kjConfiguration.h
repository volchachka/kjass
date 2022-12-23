namespace KingJass {

    /*
            In KingJass a Directive
            code: {
                @DIRECTIVE_DEBUG 
            }
            Presence of this directive enables debug mode 
            Directive enables the mode matching to it.
    */
    namespace Directive {
        
        static const char Debug         [] = "DIRECTIVE_DEBUG";
        static const char AutoLogger    [] = "DIRECTIVE_AUTO_LOG";
        static const char Exceptions    [] = "DIRECTIVE_EXCEPT";
        static const char Optimization  [] = "DIRECTIVE_OPTMIMIZE";

        enum Flags { DEBUG = 0, AUTOLOG = 2, EXCEPTIONS = 4, OPTIMIZATIONS = 8  };
        
    }

    enum ParseTokenType {
        StringOpen     = 0x0,
        StringClose    = 0x2,
        ScopeOpen      = 0x4,
        ScopeClose     = 0x8,
        CommentSingle  = 0x10,
        CommentOpen    = 0x20,
        CommentClose   = 0x40
    };

    enum Config {
        Succeful       = 0x0,
        ErrorLine      = 0x2,
        ErrorFile      = 0x4,
        AccessDenied   = 0x8

    };
    
}