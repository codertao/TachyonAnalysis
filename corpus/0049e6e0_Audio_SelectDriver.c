
/* sweep: guess */

void Audio_SelectDriver(int param_1)

{
  PTR_PTR_0055deac = (undefined *)&PTR_Snd_StartupDefault_0055e6f0;
  if (param_1 == 1) {
    PTR_PTR_0055deac = (undefined *)&PTR_Mss_Init_0055e4b8;
  }
  return;
}

