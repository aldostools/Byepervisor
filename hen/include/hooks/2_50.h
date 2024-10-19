#ifndef HOOKS_2_50_H
#define HOOKS_2_50_H

#include "hook.h"

struct hook g_kernel_hooks_250[] = {
    {
        HOOK_TEST_SYS_IS_DEVELOPMENT_MODE,
        0x92A1EB
    },
    {
        HOOK_FSELF_SCE_SBL_AUTHMGR_IS_LOADABLE_CALL_IS_LOADABLE,
        0x2913C1
    },
    {
        HOOK_FSELF_SCE_SBL_AUTHMGR_AUTH_HEADER,
        0x291B49
    },
    {
        HOOK_FSELF_SCE_SBL_AUTHMGR_RESUME,
        0x29296B
    },
    {
        HOOK_FSELF_SCE_SBL_AUTHMGR_LOAD_SELF_SEGMENT,
        0x32C735
    },
    {
        HOOK_FSELF_SCE_SBL_AUTHMGR_LOAD_SELF_BLOCK,
        0x32CC1F
    },
    {
        HOOK_FSELF_SCE_SBL_AUTHMGR_LOAD_MULTIPLE_SELF_BLOCKS,
        0x32D1C5
    },
    {
        HOOK_FSELF_SCE_SBL_AUTHMGR_IS_LOADABLE_CALL_GET_PATHID,
        0x2912AD
    },
    {
        HOOK_FPKG_NPDRM_IOCTL_CMD_5_CALL_SCE_SBL_SERVICE_MAILBOX,
        0x87E06C
    },
    {
        HOOK_FPKG_NPDRM_IOCTL_CMD_6_CALL_SCE_SBL_SERVICE_MAILBOX,
        0x87E311
    },
    {
        HOOK_FPKG_PFS_VERIFY_SUPER_BLOCK_CALL_SCE_SBL_SERVICE_MAILBOX,
        0x289F36
    }
};

#endif // HOOKS_2_50_H