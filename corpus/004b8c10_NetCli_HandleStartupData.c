
/* MSG_STARTUPDATA(4): new stage -> callback 0x6af594, ack */

void NetCli_HandleStartupData(int param_1)

{
  DAT_006af608 = *(undefined4 *)(param_1 + 0xc);
  if (DAT_006af630 != *(int *)(param_1 + 4)) {
    if ((*(int *)(param_1 + 8) != DAT_006af620) && (DAT_006af5a8 != (code *)0x0)) {
      (*DAT_006af5a8)(*(int *)(param_1 + 8));
    }
    DAT_006af630 = *(int *)(param_1 + 4);
    DAT_006af620 = *(int *)(param_1 + 8);
    if (DAT_006af594 != (code *)0x0) {
      (*DAT_006af594)(param_1 + 0x10);
    }
    NetCli_SendStartupAck();
  }
  return;
}

