
void ModeLoop_Variable(int param_1)

{
  DAT_00562cd4 = 0;
  while( true ) {
    MessagePump_IdleTick();
    if (DAT_00590e38 != 0) {
      g_NextMode = 0;
      DAT_00590e20 = 1;
      return;
    }
    DAT_00562cd4 = (**(code **)(param_1 + 4))();
    if (DAT_00562cd4 != 0) break;
    if (((DAT_00590e30 != 0) && (DAT_00603964 != 0)) && (DAT_00603968 != 0)) {
      (**(code **)(param_1 + 8))();
      DAT_00590e30 = 0;
    }
    if (DAT_00562cd4 != 0) {
      return;
    }
  }
  return;
}

