
/* runs current mode object; chains next mode via g_NextMode (DAT_00590e28) */

void StateMachine_Run(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = &DAT_00590e20;
  for (iVar1 = 0xd; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  while ((DAT_00590e20 == 0 && (param_1 != (undefined4 *)0x0))) {
    DAT_00590e30 = 0;
    if ((code *)*param_1 != (code *)0x0) {
      (*(code *)*param_1)();
    }
    if (*(char *)(param_1 + 4) == '\0') {
      ModeLoop_FixedStep50Hz();
    }
    else {
      ModeLoop_Variable(param_1);
    }
    if (((code *)param_1[3] != (code *)0x0) && (DAT_00590e38 == 0)) {
      (*(code *)param_1[3])();
    }
    DAT_00590e48 = 0;
    DAT_00590e4c = 0;
    DAT_00590e24 = param_1;
    param_1 = g_NextMode;
  }
  return;
}

