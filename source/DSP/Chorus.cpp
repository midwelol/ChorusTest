//
// Created by sande on 4/28/2026.
//
#include "Chorus.h"

void Chorus::setRate(float hz)
{
    rate = hz;
    chorus.setRate(rate);
}
void Chorus::setDepth(float d)
{
    depth = d;
    chorus.setDepth(depth);
}
void Chorus::setMix (float m)
{
    mix = m;
    chorus.setMix(mix);
}

void Chorus::prepare(const juce::dsp::ProcessSpec& spec)
{
    chorus.prepare(spec);
    setRate(rate);
    setDepth(depth);
    setMix(mix);
}

void Chorus::process(juce::AudioBuffer<float>& buffer)
{
    juce::dsp::AudioBlock<float> block(buffer);
    juce::dsp::ProcessContextReplacing<float> context(block);
    chorus.process(context);
}