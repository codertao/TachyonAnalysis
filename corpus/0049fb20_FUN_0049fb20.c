
void FUN_0049fb20(void)

{
  int iVar1;
  
  FUN_0049eca0();
  iVar1 = some_iter_over_list();
  while (iVar1 == 0) {
    MessagePump_IdleTick();
    MessageBeep(0xffffffff);
    iVar1 = some_iter_over_list();
  }
  return;
}

