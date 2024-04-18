#include "DxLib.h"
#include "Main.h"
#include "Define.h"

// プログラムは android_main から始まります
int android_main( void )
{
    Main main;
    SetGraphMode(SCREEN_W, SCREEN_H, 32);
    DxLib_Init(), SetDrawScreen( DX_SCREEN_BACK ); //ウィンドウモード変更と初期化と裏画面設定
    main.onCreate();
    while( ScreenFlip()==0 && ProcessMessage()==0 && ClearDrawScreen()==0 ){
        main.loop();
    }
    DxLib_End(); // DXライブラリ終了処理
    return 0;
}