/*
This header defines the classes for the AR Actions,
Association Release Related Actions (Table 9-8 of ps 3.8-2009).

Since each class is essentially a placeholder for a function pointer, I'm breaking with having
each class have its own file for the sake of brevity of the number of files.
*/

#include "gdcmULAction.h"

namespace gdcm {
  namespace network {

    //Send A-RELEASE-RQ-PDU
    //Next State: eSta7WaitRelease
    class ULActionAR1 : public ULAction {
    public:
      EStateID PerformAction(ULEvent& inEvent, ULConnection& inConnection);
    };

    //Issue A-RELEASE indication primitive
    //Next State: eSta8WaitLocalRelease
    class ULActionAR2 : public ULAction {
    public:
      EStateID PerformAction(ULEvent& inEvent, ULConnection& inConnection);
    };

    //Issue A-RELEASE confirmation primitive, and close transport connection
    //Next State: eSta1Idle
    class ULActionAR3 : public ULAction {
    public:
      EStateID PerformAction(ULEvent& inEvent, ULConnection& inConnection);
    };

    //Issue A-RELEASE-RP PDU and start ARTIM timer
    //Next State: eSta13AwaitingClose
    class ULActionAR4 : public ULAction {
    public:
      EStateID PerformAction(ULEvent& inEvent, ULConnection& inConnection);
    };

    //Stop ARTIM timer
    //Next State: eSta1Idle
    class ULActionAR5 : public ULAction {
    public:
      EStateID PerformAction(ULEvent& inEvent, ULConnection& inConnection);
    };

    //Issue P-Data indication
    //Next State: eSta7WaitRelease
    class ULActionAR6 : public ULAction {
    public:
      EStateID PerformAction(ULEvent& inEvent, ULConnection& inConnection);
    };

    //Issue P-DATA-TF PDU
    //Next State: eSta8WaitLocalRelease
    class ULActionAR7 : public ULAction {
    public:
      EStateID PerformAction(ULEvent& inEvent, ULConnection& inConnection);
    };

    //Issue A-RELEASE indication (release collision):
    //- If association-requestor, next state is eSta9ReleaseCollisionRqLocal
    //- if not, next state is eSta10ReleaseCollisionAc
    class ULActionAR8 : public ULAction {
    public:
      EStateID PerformAction(ULEvent& inEvent, ULConnection& inConnection);
    };

    //Send A-RELEASE-RP PDU
    //Next State: eSta11ReleaseCollisionRq
    class ULActionAR9 : public ULAction {
    public:
      EStateID PerformAction(ULEvent& inEvent, ULConnection& inConnection);
    };

    //Issue A-RELEASE confirmation primitive
    //Next State: eSta12ReleaseCollisionAcLocal
    class ULActionAR10 : public ULAction {
    public:
      EStateID PerformAction(ULEvent& inEvent, ULConnection& inConnection);
    };
  }
}