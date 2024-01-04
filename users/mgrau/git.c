#include "git.h"

void process_git_keycodes(uint16_t keycode) {
    switch (keycode) {
        case GIT_REV:
            SEND_STRING("git revert");
            break;
        case GIT_TAG:
            SEND_STRING("git tag");
            break;
        case GIT_BRA:
            SEND_STRING("git branch");
            break;
        case GIT_PUL:
            SEND_STRING("git pull");
            break;
        case GIT_MER:
            SEND_STRING("git merge");
            break;
        case GIT_REB:
            SEND_STRING("git rebase");
            break;
        case GIT_COM:
            SEND_STRING("git commit");
            break;
        case GIT_CHE:
            SEND_STRING("git checkout");
            break;
        case GIT_CLO:
            SEND_STRING("git clone");
            break;
        case GIT_FET:
            SEND_STRING("git fetch");
            break;
        case GIT_STA:
            SEND_STRING("git stash");
            break;
    }
}
