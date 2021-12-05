// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include "../Global.h"
#include "Bedrock.hpp"
#define EXTRA_INCLUDE_PART_TASKGROUP
#include "Extra/TaskGroupAPI.hpp"
#undef EXTRA_INCLUDE_PART_TASKGROUP
class TaskGroup {
#include "Extra/TaskGroupAPI.hpp"
public:
    /*0*/ virtual ~TaskGroup();
    /*1*/ virtual void taskRegister(class std::shared_ptr<class BackgroundTaskBase>);
    /*2*/ virtual void requeueTask(class std::shared_ptr<class BackgroundTaskBase>, bool);
    /*3*/ virtual int /*enum enum TaskGroupState*/ getState() const;
    /*4*/ virtual void processCoroutines();
    /*5*/ virtual void taskComplete(class gsl::not_null<class BackgroundTaskBase*>);
    /*6*/ virtual void __unk_vfn_0();
    /*7*/ virtual void __unk_vfn_1();
    /*8*/ virtual void __unk_vfn_2();
    /*9*/ virtual void __unk_vfn_3();
    /*10*/ virtual void __unk_vfn_4();
    /*11*/ virtual void __unk_vfn_5();
    /*12*/ virtual void __unk_vfn_6();
    /*13*/ virtual void __unk_vfn_7();
    /*14*/ virtual void __unk_vfn_8();
    /*15*/ virtual void __unk_vfn_9();
    /*16*/ virtual void __unk_vfn_10();
    /*17*/ virtual void __unk_vfn_11();
    /*18*/ virtual void __unk_vfn_12();
    /*19*/ virtual void __unk_vfn_13();
    /*20*/ virtual void __unk_vfn_14();
    /*21*/ virtual void __unk_vfn_15();
    /*22*/ virtual void __unk_vfn_16();
    /*23*/ virtual void __unk_vfn_17();
    /*
    inline int \/*enum enum TaskGroupState*\/ getState() const{
        int \/*enum enum TaskGroupState*\/ (TaskGroup::*rv)() const;
        *((void**)&rv) = dlsym("?getState@TaskGroup@@UEBA?AW4TaskGroupState@@XZ");
        return (this->*rv)();
    }
    inline void processCoroutines(){
        void (TaskGroup::*rv)();
        *((void**)&rv) = dlsym("?processCoroutines@TaskGroup@@UEAAXXZ");
        return (this->*rv)();
    }
    inline void requeueTask(class std::shared_ptr<class BackgroundTaskBase> a0, bool a1){
        void (TaskGroup::*rv)(class std::shared_ptr<class BackgroundTaskBase>, bool);
        *((void**)&rv) = dlsym("?requeueTask@TaskGroup@@UEAAXV?$shared_ptr@VBackgroundTaskBase@@@std@@_N@Z");
        return (this->*rv)(std::forward<class std::shared_ptr<class BackgroundTaskBase>>(a0), std::forward<bool>(a1));
    }
    inline void taskComplete(class gsl::not_null<class BackgroundTaskBase*> a0){
        void (TaskGroup::*rv)(class gsl::not_null<class BackgroundTaskBase*>);
        *((void**)&rv) = dlsym("?taskComplete@TaskGroup@@UEAAXV?$not_null@PEAVBackgroundTaskBase@@@gsl@@@Z");
        return (this->*rv)(std::forward<class gsl::not_null<class BackgroundTaskBase*>>(a0));
    }
    inline void taskRegister(class std::shared_ptr<class BackgroundTaskBase> a0){
        void (TaskGroup::*rv)(class std::shared_ptr<class BackgroundTaskBase>);
        *((void**)&rv) = dlsym("?taskRegister@TaskGroup@@UEAAXV?$shared_ptr@VBackgroundTaskBase@@@std@@@Z");
        return (this->*rv)(std::forward<class std::shared_ptr<class BackgroundTaskBase>>(a0));
    }
    */
    MCAPI void disableOwnerThreadChecks();
    MCAPI void flush(class std::function<void (void)>);
    MCAPI class Scheduler& getScheduler();
    MCAPI bool isEmpty() const;
    MCAPI class std::shared_ptr<class Bedrock::Threading::IAsyncResult<void> > queue(struct TaskStartInfoEx<void> const&, class std::function<class TaskResult (void)>&&, class std::function<void (void)>&&);
    MCAPI class std::shared_ptr<class Bedrock::Threading::IAsyncResult<void> > queue(class gsl::basic_string_span<char const, -1>, class std::function<class TaskResult (void)>&&, class std::function<void (void)>&&);
    MCAPI class std::shared_ptr<class Bedrock::Threading::IAsyncResult<void> > queueSync(struct TaskStartInfoEx<void> const&, class std::function<class TaskResult (void)>&&);
    MCAPI class std::shared_ptr<class Bedrock::Threading::IAsyncResult<void> > queueSync(class gsl::basic_string_span<char const, -1>, class std::function<class TaskResult (void)>&&);
    MCAPI void sync_DEPRECATED_ASK_TOMMO(class std::function<void (void)>);
    MCAPI static class std::shared_ptr<class Bedrock::Threading::IAsyncResult<void> > queueChildSync_DEPRECATED(struct TaskStartInfoEx<void> const&, class std::function<class TaskResult (void)>&&);
    MCAPI static class std::shared_ptr<class Bedrock::Threading::IAsyncResult<void> > queueChild_DEPRECATED(struct TaskStartInfoEx<void> const&, class std::function<class TaskResult (void)>&&, class std::function<void (void)>&&);

protected:

private:
    MCAPI void _forAllTasks(class std::unique_lock<class std::mutex>&, class std::function<void (class std::shared_ptr<class BackgroundTaskBase> const&)>);
    MCAPI bool _isEmptyInternal() const;
    MCAPI void _queueInternal(class std::shared_ptr<class BackgroundTaskBase>);
    MCAPI static class TaskGroup* getCurrentTaskGroup();
};