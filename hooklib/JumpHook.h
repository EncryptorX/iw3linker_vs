#pragma once
#include "BaseHook.h"

namespace hooklib
{
    // A simple "jmp XXX" instruction hook.
    class CJumpHook : public CBaseHook
    {
    public:
        template<class T>
        CJumpHook(uint Address_, T JumpTo_, bool bCallHook_ = false)
            : CBaseHook(Address_, Address_ + 5)
            , m_pOriginalInstruction(nullptr)
        {
            m_iRawTarget = reinterpret_cast<uint>(JumpTo_);
            m_bCallHook = bCallHook_;
        }

        ~CJumpHook();

        void Install() override final;
        void Release() override final;

    private:
        EHookType GetHookType() const override final;

        SJumpHook* m_pOriginalInstruction;
        uint m_iRawTarget;
        bool m_bCallHook;
    };
}