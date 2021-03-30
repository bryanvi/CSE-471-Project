#include "stdafx.h"
#include "SineWave.h"

CSineWave::CSineWave()
{
	//set m_phase to zero, m_amp to 0.1, and m_freq to a default value of 440.
	m_phase = 0;
	m_amp = 0.1;
	m_freq = 440;
}

void CSineWave::Start()
{
    m_phase = 0;
}

bool CSineWave::Generate()
{
    m_frame[0] = m_amp * sin(m_phase * 2 * PI);
    m_frame[1] = m_frame[0];

    m_phase += m_freq * GetSamplePeriod();

    return true;
}
