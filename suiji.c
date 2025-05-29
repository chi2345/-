#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    system("chcp 65001 > nul"); // 自动切换到UTF-8编码
    // 人名和游戏名列表
    const char *names[] = {"小明", "小红", "小刚", "小丽", "小强"};
    const char *games[] = {"王者荣耀", "英雄联盟", "绝地求生", "原神", "和平精英"};
    int name_count = sizeof(names) / sizeof(names[0]);
    int game_count = sizeof(games) / sizeof(games[0]);

    // 初始化随机数种子
    srand((unsigned int)time(NULL));

    // 随机选择人名和游戏名
    int name_index = rand() % name_count;
    int game_index = rand() % game_count;

    printf("随机人名: %s\n", names[name_index]);
    printf("随机游戏: %s\n", games[game_index]);

    system("pause");
    return 0;
}
