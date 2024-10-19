#pragma once
#ifndef HOOK_H
#define HOOK_H

enum hook_id
{
    HOOK_TEST_SYS_IS_DEVELOPMENT_MODE = 0,
    HOOK_FSELF_SCE_SBL_AUTHMGR_IS_LOADABLE_CALL_IS_LOADABLE,
    HOOK_FSELF_SCE_SBL_AUTHMGR_AUTH_HEADER,
    HOOK_FSELF_SCE_SBL_AUTHMGR_RESUME,
    HOOK_FSELF_SCE_SBL_AUTHMGR_LOAD_SELF_SEGMENT,
    HOOK_FSELF_SCE_SBL_AUTHMGR_LOAD_SELF_BLOCK,
    HOOK_FSELF_SCE_SBL_AUTHMGR_LOAD_MULTIPLE_SELF_BLOCKS,
    HOOK_FSELF_SCE_SBL_AUTHMGR_IS_LOADABLE_CALL_GET_PATHID,
    HOOK_FPKG_NPDRM_IOCTL_CMD_5_CALL_SCE_SBL_SERVICE_MAILBOX,
    HOOK_FPKG_NPDRM_IOCTL_CMD_6_CALL_SCE_SBL_SERVICE_MAILBOX,
    HOOK_FPKG_PFS_VERIFY_SUPER_BLOCK_CALL_SCE_SBL_SERVICE_MAILBOX
};

struct hook
{
    enum hook_id id;
    uint64_t call_offset;
};

int install_hook(hook_id id, void *func);
int apply_test_hook();

#endif // HOOK_H