namespace KingJass {

    namespace ParseTokenType {
        static const int StringOpen     = 0x0;
        static const int StringClose    = 0x2;
        static const int ScopeOpen      = 0x4;
        static const int ScopeClose     = 0x8;
        static const int CommentSingle  = 0x10;
        static const int CommentOpen    = 0x20;
        static const int CommentClose   = 0x40;
    }

    namespace Config
    {
        static const int Succeful       = 0x0;
        static const int ErrorLine      = 0x2;
        static const int ErrorFile      = 0x4;
        static const int AccessDenied   = 0x8;

    } 
    
}