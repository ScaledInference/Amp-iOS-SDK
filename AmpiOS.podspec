Pod::Spec.new do |s|  
    s.name              = 'AmpiOS'
    s.version           = '1.0.4'
    s.summary           = 'Amp.ai client for iOS  applications.'
    s.homepage          = 'https://github.com/ScaledInference/Amp-iOS-SDK.git'
    s.author            = { 'Steve Mask' => 'steve@scaledinference.com' }
    s.license           = { :type => 'Apache-2.0', :file => 'LICENSE' }

    s.platform          = :ios, '10.0'

    s.source            = { :git => 'https://github.com/ScaledInference/Amp-iOS-SDK.git', :tag => 'v1.0.4' }
    
    s.ios.vendored_frameworks = 'AmpiOS.framework'
end
