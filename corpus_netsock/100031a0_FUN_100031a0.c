
void FUN_100031a0(void)

{
  if (100 < DAT_10019bf0) {
    DAT_10019bf0 = 0;
    ns_SendCreatePlayer();
  }
  DAT_10019bf0 = DAT_10019bf0 + 1;
  return;
}

