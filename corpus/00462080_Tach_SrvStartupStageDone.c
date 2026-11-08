
/* stage 5 -> send 0x1111 */

undefined4 Tach_SrvStartupStageDone(int param_1,int param_2)

{
  if (param_2 == 5) {
    SrvSend_StartupComplete(param_1);
    *(undefined4 *)(param_1 + 0x13c) = 0;
    return 0;
  }
  return 1;
}

