#ifndef HOOKS_1_14_H
#define HOOKS_1_14_H

#include "hook.h"

struct hook g_kernel_hooks_114[] = {
    {
        HOOK_TEST_SYS_IS_DEVELOPMENT_MODE,
        0x9081db,
        0x991e30
    },
    {
        HOOK_FSELF_SCE_SBL_AUTHMGR_IS_LOADABLE_CALL_IS_LOADABLE,
        0x2dcde1,
        0x8a6be0
    },
    {
        HOOK_FSELF_SCE_SBL_AUTHMGR_AUTH_HEADER,
        0x2dd55e,
        0x8a6c40
    },
    {
        HOOK_FSELF_SCE_SBL_AUTHMGR_RESUME,
        0x2de3a9,
        0x8a6c40
    },
    {
        HOOK_FSELF_SCE_SBL_AUTHMGR_LOAD_SELF_SEGMENT,
        0x371305,
        0x564050
    },
    {
        HOOK_FSELF_SCE_SBL_AUTHMGR_LOAD_SELF_BLOCK,
        0x37180f,
        0x564050
    },
    {
        HOOK_FSELF_SCE_SBL_AUTHMGR_LOAD_MULTIPLE_SELF_BLOCKS,
        0x371db5,
        0x564050
    },
    {
        HOOK_FSELF_SCE_SBL_AUTHMGR_IS_LOADABLE_CALL_GET_PATHID,
        0x2dcccd,
        0x5a9d40
    },
    {
        HOOK_FPKG_NPDRM_IOCTL_CMD_5_CALL_SCE_SBL_SERVICE_MAILBOX,
        0x86787c,
        0x564050
    },
    {
        HOOK_FPKG_NPDRM_IOCTL_CMD_6_CALL_SCE_SBL_SERVICE_MAILBOX,
        0x867b21,
        0x564050
    },
    {
        HOOK_FPKG_PFS_VERIFY_SUPER_BLOCK_CALL_SCE_SBL_SERVICE_MAILBOX,
        0x2d56b6,
        0x564050
    },
    {
        HOOK_FPKG_SCE_SBL_PFS_CLEAR_KEY_1_CALL_SCE_SBL_SERVICE_MAILBOX,
        0x2d50df,
        0x564050
    },
    {
        HOOK_FPKG_SCE_SBL_PFS_CLEAR_KEY_2_CALL_SCE_SBL_SERVICE_MAILBOX,
        0x2d514b,
        0x564050
    },
    {
        HOOK_FPKG_SCE_SBL_SERVICE_CRYPT_ASYNC_CALL_CCP_MSG_ENQUEUE,
        0x32e33d,
        0x72a1a0
    }
};

#endif // HOOKS_1_14_H
