/* C source generated by Harbour */

#include "hbvmpub.h"
#include "hbpcode.h"
#include "hbinit.h"
#include "hbxvm.h"

HB_FUNC( ERRORSYS );
HB_FUNC_EXTERN( ERRORBLOCK );
HB_FUNC_STATIC( DEFERROR );
HB_FUNC_EXTERN( VALTYPE );
HB_FUNC_EXTERN( NETERR );
HB_FUNC( WUSLOG );
HB_FUNC( LETO_ERRORMESSAGE );
HB_FUNC_EXTERN( EMPTY );
HB_FUNC_EXTERN( LTRIM );
HB_FUNC_EXTERN( STR );
HB_FUNC_EXTERN( LETO_SETHRBERROR );
HB_FUNC_EXTERN( BREAK );
HB_FUNC_EXTERN( HB_ISSTRING );
HB_FUNC_EXTERN( HB_ISNUMERIC );
HB_FUNC_EXTERN( HB_EOL );
HB_FUNC_STATIC( ARGUMENTS );
HB_FUNC_EXTERN( HB_VALTOSTR );
HB_FUNC_EXTERN( LEN );
HB_FUNC_EXTERN( LETO_WUSLOG );
HB_FUNC( WRLOG );
HB_FUNC_EXTERN( LETO_WRLOG );

HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_ERRORSYS )
{ "ERRORSYS", { HB_FS_PUBLIC | HB_FS_FIRST | HB_FS_LOCAL }, { HB_FUNCNAME( ERRORSYS ) }, NULL },
{ "ERRORBLOCK", { HB_FS_PUBLIC }, { HB_FUNCNAME( ERRORBLOCK ) }, NULL },
{ "DEFERROR", { HB_FS_STATIC | HB_FS_LOCAL }, { HB_FUNCNAME( DEFERROR ) }, NULL },
{ "VALTYPE", { HB_FS_PUBLIC }, { HB_FUNCNAME( VALTYPE ) }, NULL },
{ "GENCODE", { HB_FS_PUBLIC | HB_FS_MESSAGE }, { NULL }, NULL },
{ "CANSUBSTITUTE", { HB_FS_PUBLIC | HB_FS_MESSAGE }, { NULL }, NULL },
{ "CANRETRY", { HB_FS_PUBLIC | HB_FS_MESSAGE }, { NULL }, NULL },
{ "OSCODE", { HB_FS_PUBLIC | HB_FS_MESSAGE }, { NULL }, NULL },
{ "CANDEFAULT", { HB_FS_PUBLIC | HB_FS_MESSAGE }, { NULL }, NULL },
{ "NETERR", { HB_FS_PUBLIC }, { HB_FUNCNAME( NETERR ) }, NULL },
{ "WUSLOG", { HB_FS_PUBLIC | HB_FS_LOCAL }, { HB_FUNCNAME( WUSLOG ) }, NULL },
{ "LETO_ERRORMESSAGE", { HB_FS_PUBLIC | HB_FS_LOCAL }, { HB_FUNCNAME( LETO_ERRORMESSAGE ) }, NULL },
{ "EMPTY", { HB_FS_PUBLIC }, { HB_FUNCNAME( EMPTY ) }, NULL },
{ "LTRIM", { HB_FS_PUBLIC }, { HB_FUNCNAME( LTRIM ) }, NULL },
{ "STR", { HB_FS_PUBLIC }, { HB_FUNCNAME( STR ) }, NULL },
{ "LETO_SETHRBERROR", { HB_FS_PUBLIC }, { HB_FUNCNAME( LETO_SETHRBERROR ) }, NULL },
{ "SUBCODE", { HB_FS_PUBLIC | HB_FS_MESSAGE }, { NULL }, NULL },
{ "FILENAME", { HB_FS_PUBLIC | HB_FS_MESSAGE }, { NULL }, NULL },
{ "DESCRIPTION", { HB_FS_PUBLIC | HB_FS_MESSAGE }, { NULL }, NULL },
{ "OPERATION", { HB_FS_PUBLIC | HB_FS_MESSAGE }, { NULL }, NULL },
{ "BREAK", { HB_FS_PUBLIC }, { HB_FUNCNAME( BREAK ) }, NULL },
{ "SEVERITY", { HB_FS_PUBLIC | HB_FS_MESSAGE }, { NULL }, NULL },
{ "HB_ISSTRING", { HB_FS_PUBLIC }, { HB_FUNCNAME( HB_ISSTRING ) }, NULL },
{ "SUBSYSTEM", { HB_FS_PUBLIC | HB_FS_MESSAGE }, { NULL }, NULL },
{ "HB_ISNUMERIC", { HB_FS_PUBLIC }, { HB_FUNCNAME( HB_ISNUMERIC ) }, NULL },
{ "ARGS", { HB_FS_PUBLIC | HB_FS_MESSAGE }, { NULL }, NULL },
{ "HB_EOL", { HB_FS_PUBLIC }, { HB_FUNCNAME( HB_EOL ) }, NULL },
{ "ARGUMENTS", { HB_FS_STATIC | HB_FS_LOCAL }, { HB_FUNCNAME( ARGUMENTS ) }, NULL },
{ "HB_VALTOSTR", { HB_FS_PUBLIC }, { HB_FUNCNAME( HB_VALTOSTR ) }, NULL },
{ "LEN", { HB_FS_PUBLIC }, { HB_FUNCNAME( LEN ) }, NULL },
{ "LETO_WUSLOG", { HB_FS_PUBLIC }, { HB_FUNCNAME( LETO_WUSLOG ) }, NULL },
{ "WRLOG", { HB_FS_PUBLIC | HB_FS_LOCAL }, { HB_FUNCNAME( WRLOG ) }, NULL },
{ "LETO_WRLOG", { HB_FS_PUBLIC }, { HB_FUNCNAME( LETO_WRLOG ) }, NULL }
HB_INIT_SYMBOLS_EX_END( hb_vm_SymbolInit_ERRORSYS, "", 0x0, 0x0003 )

#if defined( HB_PRAGMA_STARTUP )
   #pragma startup hb_vm_SymbolInit_ERRORSYS
#elif defined( HB_DATASEG_STARTUP )
   #define HB_DATASEG_BODY    HB_DATASEG_FUNC( hb_vm_SymbolInit_ERRORSYS )
   #include "hbiniseg.h"
#endif

HB_FUNC( ERRORSYS )
{
   do {
	hb_xvmPushFuncSymbol( symbols + 1 );
	{
		static const HB_BYTE codeblock[ 12 ] = {
			1, 0, 0, 0, 176, 2, 0, 95, 1, 12, 1, 6 };
		hb_xvmPushBlock( codeblock, symbols );
	}
	if( hb_xvmDo( 1 ) ) break;
	/* *** END PROC *** */
   } while( 0 );
}

HB_FUNC_STATIC( DEFERROR )
{
   HB_BOOL fValue;
   do {
	hb_xvmFrame( 1, 1 );
	hb_xvmLocalSetInt( 2, 0L );
	hb_xvmPushFuncSymbol( symbols + 3 );
	hb_xvmPushLocal( 1 );
	if( hb_xvmFunction( 1 ) ) break;
	hb_xvmPushStringConst( "O", 1 );
	if( hb_xvmExactlyEqual() ) break;
	if( hb_xvmPopLogical( &fValue ) ) break;
	if( ! fValue )
		goto lab00001;
	hb_xvmPushSymbol( symbols + 4 );
	hb_xvmPushLocal( 1 );
	if( hb_xvmSend( 0 ) ) break;
	if( hb_xvmEqualIntIs( 5L, &fValue ) ) break;
	if( !fValue )
		goto lab00001;
	hb_xvmPushSymbol( symbols + 5 );
	hb_xvmPushLocal( 1 );
	if( hb_xvmSend( 0 ) ) break;
	if( hb_xvmPopLogical( &fValue ) ) break;
	if( ! fValue )
		goto lab00001;
	hb_xvmRetInt( 0L );
	/* *** END PROC *** */
	break;
lab00001: ;
	hb_xvmPushSymbol( symbols + 4 );
	hb_xvmPushLocal( 1 );
	if( hb_xvmSend( 0 ) ) break;
	if( hb_xvmEqualIntIs( 41L, &fValue ) ) break;
	if( !fValue )
		goto lab00002;
	hb_xvmPushSymbol( symbols + 6 );
	hb_xvmPushLocal( 1 );
	if( hb_xvmSend( 0 ) ) break;
	if( hb_xvmPopLogical( &fValue ) ) break;
	if( ! fValue )
		goto lab00002;
	hb_xvmPushLogical( HB_TRUE );
	hb_xvmRetValue();
	/* *** END PROC *** */
	break;
lab00002: ;
	hb_xvmPushSymbol( symbols + 4 );
	hb_xvmPushLocal( 1 );
	if( hb_xvmSend( 0 ) ) break;
	if( hb_xvmEqualIntIs( 21L, &fValue ) ) break;
	if( !fValue )
		goto lab00003;
	hb_xvmPushSymbol( symbols + 7 );
	hb_xvmPushLocal( 1 );
	if( hb_xvmSend( 0 ) ) break;
	if( hb_xvmEqualIntIs( 32L, &fValue ) ) break;
	if( !fValue )
		goto lab00003;
	hb_xvmPushSymbol( symbols + 8 );
	hb_xvmPushLocal( 1 );
	if( hb_xvmSend( 0 ) ) break;
	if( hb_xvmPopLogical( &fValue ) ) break;
	if( ! fValue )
		goto lab00003;
	hb_xvmPushFuncSymbol( symbols + 9 );
	hb_xvmPushLogical( HB_TRUE );
	if( hb_xvmDo( 1 ) ) break;
	hb_xvmPushLogical( HB_FALSE );
	hb_xvmRetValue();
	/* *** END PROC *** */
	break;
lab00003: ;
	hb_xvmPushSymbol( symbols + 4 );
	hb_xvmPushLocal( 1 );
	if( hb_xvmSend( 0 ) ) break;
	if( hb_xvmEqualIntIs( 40L, &fValue ) ) break;
	if( !fValue )
		goto lab00004;
	hb_xvmPushSymbol( symbols + 8 );
	hb_xvmPushLocal( 1 );
	if( hb_xvmSend( 0 ) ) break;
	if( hb_xvmPopLogical( &fValue ) ) break;
	if( ! fValue )
		goto lab00004;
	hb_xvmPushFuncSymbol( symbols + 9 );
	hb_xvmPushLogical( HB_TRUE );
	if( hb_xvmDo( 1 ) ) break;
	hb_xvmPushLogical( HB_FALSE );
	hb_xvmRetValue();
	/* *** END PROC *** */
	break;
lab00004: ;
	hb_xvmPushSymbol( symbols + 6 );
	hb_xvmPushLocal( 1 );
	if( hb_xvmSend( 0 ) ) break;
	if( hb_xvmPopLogical( &fValue ) ) break;
	if( ! fValue )
		goto lab00005;
	if( hb_xvmLocalAddInt( 2, 1 ) ) break;
lab00005: ;
	hb_xvmPushSymbol( symbols + 5 );
	hb_xvmPushLocal( 1 );
	if( hb_xvmSend( 0 ) ) break;
	if( hb_xvmPopLogical( &fValue ) ) break;
	if( ! fValue )
		goto lab00006;
	if( hb_xvmLocalAddInt( 2, 2 ) ) break;
lab00006: ;
	hb_xvmPushSymbol( symbols + 8 );
	hb_xvmPushLocal( 1 );
	if( hb_xvmSend( 0 ) ) break;
	if( hb_xvmPopLogical( &fValue ) ) break;
	if( ! fValue )
		goto lab00007;
	if( hb_xvmLocalAddInt( 2, 4 ) ) break;
lab00007: ;
	hb_xvmPushFuncSymbol( symbols + 10 );
	hb_xvmPushFuncSymbol( symbols + 11 );
	hb_xvmPushLocal( 1 );
	if( hb_xvmFunction( 1 ) ) break;
	hb_xvmPushFuncSymbol( symbols + 12 );
	hb_xvmPushSymbol( symbols + 7 );
	hb_xvmPushLocal( 1 );
	if( hb_xvmSend( 0 ) ) break;
	if( hb_xvmFunction( 1 ) ) break;
	if( hb_xvmPopLogical( &fValue ) ) break;
	if( ! fValue )
		goto lab00008;
	hb_xvmPushStringConst( "", 0 );
	goto lab00009;
lab00008: ;
	hb_xvmPushStringConst( " (DOS Error ", 12 );
	hb_xvmPushFuncSymbol( symbols + 13 );
	hb_xvmPushFuncSymbol( symbols + 14 );
	hb_xvmPushSymbol( symbols + 7 );
	hb_xvmPushLocal( 1 );
	if( hb_xvmSend( 0 ) ) break;
	if( hb_xvmFunction( 1 ) ) break;
	if( hb_xvmFunction( 1 ) ) break;
	if( hb_xvmPlus() ) break;
	hb_xvmPushStringConst( ")", 1 );
	if( hb_xvmPlus() ) break;
lab00009: ;
	if( hb_xvmPlus() ) break;
	if( hb_xvmDo( 1 ) ) break;
	hb_xvmPushFuncSymbol( symbols + 15 );
	hb_xvmPushSymbol( symbols + 4 );
	hb_xvmPushLocal( 1 );
	if( hb_xvmSend( 0 ) ) break;
	hb_xvmPushSymbol( symbols + 16 );
	hb_xvmPushLocal( 1 );
	if( hb_xvmSend( 0 ) ) break;
	hb_xvmPushSymbol( symbols + 7 );
	hb_xvmPushLocal( 1 );
	if( hb_xvmSend( 0 ) ) break;
	hb_xvmPushLocal( 2 );
	hb_xvmPushFuncSymbol( symbols + 12 );
	hb_xvmPushSymbol( symbols + 17 );
	hb_xvmPushLocal( 1 );
	if( hb_xvmSend( 0 ) ) break;
	if( hb_xvmFunction( 1 ) ) break;
	if( hb_xvmPopLogical( &fValue ) ) break;
	if( ! fValue )
		goto lab00010;
	hb_xvmPushLogical( HB_FALSE );
	goto lab00011;
lab00010: ;
	hb_xvmPushLogical( HB_TRUE );
lab00011: ;
	hb_xvmPushFuncSymbol( symbols + 12 );
	hb_xvmPushSymbol( symbols + 17 );
	hb_xvmPushLocal( 1 );
	if( hb_xvmSend( 0 ) ) break;
	if( hb_xvmFunction( 1 ) ) break;
	if( hb_xvmPopLogical( &fValue ) ) break;
	if( fValue )
		goto lab00012;
	hb_xvmPushSymbol( symbols + 17 );
	hb_xvmPushLocal( 1 );
	if( hb_xvmSend( 0 ) ) break;
	goto lab00013;
lab00012: ;
	hb_xvmPushSymbol( symbols + 18 );
	hb_xvmPushLocal( 1 );
	if( hb_xvmSend( 0 ) ) break;
	hb_xvmPushStringConst( " ", 1 );
	if( hb_xvmPlus() ) break;
	hb_xvmPushSymbol( symbols + 19 );
	hb_xvmPushLocal( 1 );
	if( hb_xvmSend( 0 ) ) break;
	if( hb_xvmPlus() ) break;
lab00013: ;
	if( hb_xvmDo( 6 ) ) break;
	hb_xvmPushFuncSymbol( symbols + 20 );
	hb_xvmPushLocal( 1 );
	if( hb_xvmDo( 1 ) ) break;
	hb_xvmPushLogical( HB_FALSE );
	hb_xvmRetValue();
	/* *** END PROC *** */
   } while( 0 );
}

HB_FUNC( LETO_ERRORMESSAGE )
{
   HB_BOOL fValue;
   do {
	hb_xvmFrame( 1, 1 );
	hb_xvmPushSymbol( symbols + 21 );
	hb_xvmPushLocal( 1 );
	if( hb_xvmSend( 0 ) ) break;
	if( hb_xvmGreaterThenIntIs( 1L, &fValue ) ) break;
	if( !fValue )
		goto lab00001;
	hb_xvmPushStringConst( "Error", 5 );
	goto lab00002;
lab00001: ;
	hb_xvmPushStringConst( "Warning", 7 );
lab00002: ;
	hb_xvmPushStringConst( " ", 1 );
	hb_xvmLocalAdd( 2 );
	hb_xvmPushLocalByRef( 2 );
	hb_xvmPushFuncSymbol( symbols + 22 );
	hb_xvmPushSymbol( symbols + 23 );
	hb_xvmPushLocal( 1 );
	if( hb_xvmSend( 0 ) ) break;
	if( hb_xvmFunction( 1 ) ) break;
	if( hb_xvmPopLogical( &fValue ) ) break;
	if( ! fValue )
		goto lab00003;
	hb_xvmPushSymbol( symbols + 23 );
	hb_xvmPushLocal( 1 );
	if( hb_xvmSend( 0 ) ) break;
	goto lab00004;
lab00003: ;
	hb_xvmPushStringConst( "\?\?\?", 3 );
lab00004: ;
	if( hb_xvmPlusEqPop() ) break;
	hb_xvmPushLocalByRef( 2 );
	hb_xvmPushFuncSymbol( symbols + 24 );
	hb_xvmPushSymbol( symbols + 16 );
	hb_xvmPushLocal( 1 );
	if( hb_xvmSend( 0 ) ) break;
	if( hb_xvmFunction( 1 ) ) break;
	if( hb_xvmPopLogical( &fValue ) ) break;
	if( ! fValue )
		goto lab00005;
	hb_xvmPushStringConst( "/", 1 );
	hb_xvmPushFuncSymbol( symbols + 13 );
	hb_xvmPushFuncSymbol( symbols + 14 );
	hb_xvmPushSymbol( symbols + 16 );
	hb_xvmPushLocal( 1 );
	if( hb_xvmSend( 0 ) ) break;
	if( hb_xvmFunction( 1 ) ) break;
	if( hb_xvmFunction( 1 ) ) break;
	if( hb_xvmPlus() ) break;
	goto lab00006;
lab00005: ;
	hb_xvmPushStringConst( "/\?\?\?", 4 );
lab00006: ;
	if( hb_xvmPlusEqPop() ) break;
	hb_xvmPushFuncSymbol( symbols + 22 );
	hb_xvmPushSymbol( symbols + 18 );
	hb_xvmPushLocal( 1 );
	if( hb_xvmSend( 0 ) ) break;
	if( hb_xvmFunction( 1 ) ) break;
	if( hb_xvmPopLogical( &fValue ) ) break;
	if( ! fValue )
		goto lab00007;
	hb_xvmPushLocalByRef( 2 );
	hb_xvmPushStringConst( "  ", 2 );
	hb_xvmPushSymbol( symbols + 18 );
	hb_xvmPushLocal( 1 );
	if( hb_xvmSend( 0 ) ) break;
	if( hb_xvmPlus() ) break;
	if( hb_xvmPlusEqPop() ) break;
lab00007: ;
	hb_xvmPushFuncSymbol( symbols + 12 );
	hb_xvmPushSymbol( symbols + 17 );
	hb_xvmPushLocal( 1 );
	if( hb_xvmSend( 0 ) ) break;
	if( hb_xvmFunction( 1 ) ) break;
	if( hb_xvmPopLogical( &fValue ) ) break;
	if( fValue )
		goto lab00008;
	hb_xvmPushLocalByRef( 2 );
	hb_xvmPushStringConst( ": ", 2 );
	hb_xvmPushSymbol( symbols + 17 );
	hb_xvmPushLocal( 1 );
	if( hb_xvmSend( 0 ) ) break;
	if( hb_xvmPlus() ) break;
	if( hb_xvmPlusEqPop() ) break;
	goto lab00009;
lab00008: ;
	hb_xvmPushFuncSymbol( symbols + 12 );
	hb_xvmPushSymbol( symbols + 19 );
	hb_xvmPushLocal( 1 );
	if( hb_xvmSend( 0 ) ) break;
	if( hb_xvmFunction( 1 ) ) break;
	if( hb_xvmPopLogical( &fValue ) ) break;
	if( fValue )
		goto lab00009;
	hb_xvmPushLocalByRef( 2 );
	hb_xvmPushStringConst( ": ", 2 );
	hb_xvmPushSymbol( symbols + 19 );
	hb_xvmPushLocal( 1 );
	if( hb_xvmSend( 0 ) ) break;
	if( hb_xvmPlus() ) break;
	if( hb_xvmPlusEqPop() ) break;
lab00009: ;
	hb_xvmPushFuncSymbol( symbols + 3 );
	hb_xvmPushSymbol( symbols + 25 );
	hb_xvmPushLocal( 1 );
	if( hb_xvmSend( 0 ) ) break;
	if( hb_xvmFunction( 1 ) ) break;
	hb_xvmPushStringConst( "A", 1 );
	if( hb_xvmExactlyEqual() ) break;
	if( hb_xvmPopLogical( &fValue ) ) break;
	if( ! fValue )
		goto lab00010;
	hb_xvmPushLocalByRef( 2 );
	hb_xvmPushFuncSymbol( symbols + 26 );
	if( hb_xvmFunction( 0 ) ) break;
	hb_xvmPushStringConst( " Arguments: (", 13 );
	if( hb_xvmPlus() ) break;
	hb_xvmPushFuncSymbol( symbols + 27 );
	hb_xvmPushLocal( 1 );
	if( hb_xvmFunction( 1 ) ) break;
	if( hb_xvmPlus() ) break;
	hb_xvmPushStringConst( ")", 1 );
	if( hb_xvmPlus() ) break;
	if( hb_xvmPlusEqPop() ) break;
lab00010: ;
	hb_xvmPushLocal( 2 );
	hb_xvmRetValue();
	/* *** END PROC *** */
   } while( 0 );
}

HB_FUNC_STATIC( ARGUMENTS )
{
   HB_BOOL fValue;
   do {
	hb_xvmFrame( 3, 1 );
	hb_xvmPushStringConst( "", 0 );
	hb_xvmPopLocal( 3 );
	hb_xvmPushFuncSymbol( symbols + 3 );
	hb_xvmPushSymbol( symbols + 25 );
	hb_xvmPushLocal( 1 );
	if( hb_xvmSend( 0 ) ) break;
	if( hb_xvmFunction( 1 ) ) break;
	hb_xvmPushStringConst( "A", 1 );
	if( hb_xvmExactlyEqual() ) break;
	if( hb_xvmPopLogical( &fValue ) ) break;
	if( ! fValue )
		goto lab00005;
	hb_xvmPushInteger( 1 );
	hb_xvmPushUnRef();
	hb_xvmPopLocal( 4 );
	goto lab00004;
lab00001: ;
	hb_xvmPushSymbol( symbols + 25 );
	hb_xvmPushLocal( 1 );
	if( hb_xvmSend( 0 ) ) break;
	hb_xvmPushLocal( 4 );
	if( hb_xvmArrayPush() ) break;
	hb_xvmPopLocal( 2 );
	hb_xvmPushLocalByRef( 3 );
	hb_xvmPushStringConst( " [", 2 );
	hb_xvmPushFuncSymbol( symbols + 14 );
	hb_xvmPushLocal( 4 );
	hb_xvmPushInteger( 2 );
	if( hb_xvmFunction( 2 ) ) break;
	if( hb_xvmPlus() ) break;
	hb_xvmPushStringConst( "] = Type: ", 10 );
	if( hb_xvmPlus() ) break;
	hb_xvmPushFuncSymbol( symbols + 3 );
	hb_xvmPushLocal( 2 );
	if( hb_xvmFunction( 1 ) ) break;
	if( hb_xvmPlus() ) break;
	if( hb_xvmPlusEqPop() ) break;
	hb_xvmPushLocal( 2 );
	hb_xvmPushNil();
	if( hb_xvmNotEqual() ) break;
	if( hb_xvmPopLogical( &fValue ) ) break;
	if( ! fValue )
		goto lab00002;
	hb_xvmPushLocalByRef( 3 );
	hb_xvmPushStringConst( " Val: ", 6 );
	hb_xvmPushFuncSymbol( symbols + 28 );
	hb_xvmPushLocal( 2 );
	if( hb_xvmFunction( 1 ) ) break;
	if( hb_xvmPlus() ) break;
	if( hb_xvmPlusEqPop() ) break;
lab00002: ;
	hb_xvmPushLocal( 4 );
	hb_xvmPushFuncSymbol( symbols + 29 );
	hb_xvmPushSymbol( symbols + 25 );
	hb_xvmPushLocal( 1 );
	if( hb_xvmSend( 0 ) ) break;
	if( hb_xvmFunction( 1 ) ) break;
	if( hb_xvmLess() ) break;
	if( hb_xvmPopLogical( &fValue ) ) break;
	if( ! fValue )
		goto lab00003;
	hb_xvmPushLocalByRef( 3 );
	hb_xvmPushStringConst( ",", 1 );
	if( hb_xvmPlusEqPop() ) break;
lab00003: ;
	if( hb_xvmLocalIncPush( 4 ) ) break;
lab00004: ;
	hb_xvmPushFuncSymbol( symbols + 29 );
	hb_xvmPushSymbol( symbols + 25 );
	hb_xvmPushLocal( 1 );
	if( hb_xvmSend( 0 ) ) break;
	if( hb_xvmFunction( 1 ) ) break;
	if( hb_xvmGreater() ) break;
	if( hb_xvmPopLogical( &fValue ) ) break;
	if( ! fValue )
		goto lab00001;
lab00005: ;
	hb_xvmPushLocal( 3 );
	hb_xvmRetValue();
	/* *** END PROC *** */
   } while( 0 );
}

HB_FUNC( WUSLOG )
{
   do {
	hb_xvmFrame( 0, 1 );
	hb_xvmPushFuncSymbol( symbols + 30 );
	hb_xvmPushStringConst( "      ", 6 );
	hb_xvmPushLocal( 1 );
	if( hb_xvmPlus() ) break;
	hb_xvmPushFuncSymbol( symbols + 26 );
	if( hb_xvmFunction( 0 ) ) break;
	if( hb_xvmPlus() ) break;
	if( hb_xvmDo( 1 ) ) break;
	hb_xvmPushLogical( HB_TRUE );
	hb_xvmRetValue();
	/* *** END PROC *** */
   } while( 0 );
}

HB_FUNC( WRLOG )
{
   do {
	hb_xvmFrame( 0, 1 );
	hb_xvmPushFuncSymbol( symbols + 32 );
	hb_xvmPushStringConst( "      ", 6 );
	hb_xvmPushLocal( 1 );
	if( hb_xvmPlus() ) break;
	hb_xvmPushFuncSymbol( symbols + 26 );
	if( hb_xvmFunction( 0 ) ) break;
	if( hb_xvmPlus() ) break;
	if( hb_xvmDo( 1 ) ) break;
	hb_xvmPushLogical( HB_TRUE );
	hb_xvmRetValue();
	/* *** END PROC *** */
   } while( 0 );
}
