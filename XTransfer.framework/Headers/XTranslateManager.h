//
//  XTranslate.h
//  BaiduTranslate
//
//  Created by xixi on 2018/3/18.
//  Copyright © 2018年 xixi. All rights reserved.
//

#import <Foundation/Foundation.h>


// http://api.fanyi.baidu.com/api/trans/product/apidoc
typedef NS_ENUM(NSInteger, XLanguageType) {
    XLanguage_auto = 0, //自动检测
    XLanguage_zh,       //中文
    XLanguage_en,       //英语
    XLanguage_yue,      //粤语
    XLanguage_wyw,      //文言文
    XLanguage_jp,       //日语
    XLanguage_kor,      //韩语
    XLanguage_fra,      //法语
    XLanguage_spa,      //西班牙语
    XLanguage_th,       //泰语
    XLanguage_ara,      //阿拉伯语
    XLanguage_ru,       //俄语
    XLanguage_pt,       //葡萄牙语
    XLanguage_de,       //德语
    XLanguage_it,       //意大利语
    XLanguage_el,       //希腊语
    XLanguage_nl,       //荷兰语
    XLanguage_pl,       //波兰语
    XLanguage_bul,      //保加利亚语
    XLanguage_est,      // 爱沙尼亚语
    XLanguage_dan,      //丹麦语
    XLanguage_fin,      //芬兰语
    XLanguage_cs,       //捷克语
    XLanguage_rom,      // 罗马尼亚语
    XLanguage_slo,      //斯洛文尼亚语
    XLanguage_swe,      //瑞典语
    XLanguage_hu,       //匈牙利语
    XLanguage_cht,      //繁体中文
    XLanguage_vie,      //越南语
};


typedef void(^resultBlock)(BOOL isRight, id responseObj);


@interface XTranslateManager : NSObject

@property(nonatomic, strong) NSString *appId;
@property(nonatomic, strong) NSString *secKey;
@property(nonatomic, strong) NSString *apiURL;


+(XTranslateManager *)shareClient;


/**
 设置百度翻译的appId 和 secretkey

 @param appIdArg appId
 @param secretkeyArg secretkey
 */
-(void) setAppId:(NSString *)appIdArg secretkey:(NSString *)secretkeyArg;


/**
 设置请求百度翻译SDK 的请求的URL，因为发现有可能会发生改变，不传就默认

 @param apiURLArg api url default:http://api.fanyi.baidu.com/api/trans/vip/translate
 */
-(void) setAPIURL:(NSString *)apiURLArg;


/**
 翻译 - 直接返回翻译的结果
 被翻译的设置成自动 auto
 只需要传入 想要翻译成的语言就好
 
 @param queryStr 需要翻译的字符
 @param languageType 你想翻译成的语言,如果不传 默认英文 en
 @param block return result
 */
-(void) transfer:(NSString *)queryStr toLanguage:(XLanguageType)languageType block:(resultBlock)block;
@end
