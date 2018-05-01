# TestTransfer
（非官方）封装下方便使用百度翻译

你需要导入
#import <XTransfer/XTransfer.h>

[[XTranslateManager shareClient] setAppId:@"your baidu app id" secretkey:@"your baidu secretkey"];

[[XTranslateManager shareClient] transfer:@"" toLanguage:XLanguage_en block:^(BOOL isRight, id responseObj) {
    NSLog(@"%@", responseObj);
}];

输出结果：
{
    from = zh;
    to = en;
    "trans_result" =     (
                {
            dst = "How are you";
            src = "\U4f60\U597d\U5417";
        }
    );
}
