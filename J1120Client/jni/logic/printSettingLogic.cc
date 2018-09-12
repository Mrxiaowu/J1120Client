#pragma once

#include "../uart/ProtocolSender.h"

/**
 * 注册定时器
 * 填充数组用于注册定时器
 * 注意：id不能重复
 */
static S_ACTIVITY_TIMEER REGISTER_ACTIVITY_TIMER_TAB[] = {
	//{0,  6000}, //定时器id=0, 时间间隔6秒
	//{1,  1000},
};

/**
 * 当界面构造时触发
 */
static void onUI_init(){
    //Tips :添加 UI初始化的显示代码到这里,如:mText1Ptr->setText("123");

}

/**
 * 当切换到该界面时触发
 */
static void onUI_intent(const Intent *intentPtr) {
    if (intentPtr != NULL) {
        //TODO
    }
}

/*
 * 当界面显示时触发
 */
static void onUI_show() {

}

/*
 * 当界面隐藏时触发
 */
static void onUI_hide() {

}

/*
 * 当界面完全退出时触发
 */
static void onUI_quit() {

}

/**
 * 串口数据回调接口
 */
static void onProtocolDataUpdate(const SProtocolData &data) {

}

/**
 * 定时器触发函数
 * 不建议在此函数中写耗时操作，否则将影响UI刷新
 * 参数： id
 *         当前所触发定时器的id，与注册时的id相同
 * 返回值: true
 *             继续运行当前定时器
 *         false
 *             停止运行当前定时器
 */
static bool onUI_Timer(int id){
	switch (id) {

		default:
			break;
	}
    return true;
}


static bool onprintSettingActivityTouchEvent(const MotionEvent &ev) {

	return false;
}

static bool onButtonClick_up1(ZKButton *pButton) {
    LOGD(" ButtonClick up1 !!!\n"); //AA550503FF010B01F1

    BYTE mode[] = { 0x03, 0xFF, 0x01, 0x0B,0x01 };
    sendProtocol( mode , 5);
    return true;
}

static bool onButtonClick_sys_back(ZKButton *pButton) {
	EASYUICONTEXT->openActivity("mainActivity");
    LOGD(" ButtonClick sys_back !!!\n");
    return true;
}



static bool onButtonClick_up5(ZKButton *pButton) {
    //LOGD(" ButtonClick up5 !!!\n");
    return false;
}

static bool onButtonClick_down5(ZKButton *pButton) {
    //LOGD(" ButtonClick down5 !!!\n");
    return false;
}

static bool onButtonClick_up5000(ZKButton *pButton) {
    //LOGD(" ButtonClick up5000 !!!\n");
    return false;
}

static bool onButtonClick_up1000(ZKButton *pButton) {
    //LOGD(" ButtonClick up1000 !!!\n");
    return false;
}

static bool onButtonClick_down100(ZKButton *pButton) {
    //LOGD(" ButtonClick down100 !!!\n");
    return false;
}

static bool onButtonClick_down1000(ZKButton *pButton) {
    //LOGD(" ButtonClick down1000 !!!\n");
    return false;
}

static bool onButtonClick_down5000(ZKButton *pButton) {
    //LOGD(" ButtonClick down5000 !!!\n");
    return false;
}

static bool onButtonClick_home(ZKButton *pButton) {
    //LOGD(" ButtonClick home !!!\n");
    return false;
}

