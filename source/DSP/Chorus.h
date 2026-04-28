//
// Created by sande on 4/28/2026.
//
#pragma once
#include <juce_dsp/juce_dsp.h>
#include <juce_audio_processors/juce_audio_processors.h>

class Chorus
{
    public:
    void prepare(const juce::dsp::ProcessSpec& spec);
    void process(juce::AudioBuffer<float>& buffer);

    void setRate(float hz);
    void setMix(float mix);
    void setDepth(float depth);

    private:
        juce::dsp::Chorus<float> chorus;

    float rate { 2.5f };
    float depth { 5.0f };
    float mix { 0.5f };
};
