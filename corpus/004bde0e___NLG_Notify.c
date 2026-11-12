
/* CRT: SEH non-local-goto notify */

void __NLG_Notify(void)

{
  undefined4 in_EAX;
  int unaff_EBP;
  
  DAT_005615e8 = *(undefined4 *)(unaff_EBP + 8);
  DAT_005615e4 = in_EAX;
  DAT_005615ec = unaff_EBP;
  return;
}

