
/* sweep: guess */

void Sys_WaitKey(void)

{
  int iVar1;
  
  Input_FlushKeyQueue();
  iVar1 = some_iter_over_list();
  while (iVar1 == 0) {
    MessagePump_IdleTick();
    MessageBeep(0xffffffff);
    iVar1 = some_iter_over_list();
  }
  return;
}

