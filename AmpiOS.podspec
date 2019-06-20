Pod::Spec.new do |s|  
    s.name              = 'AmpiOS'
    s.version           = '1.2.1'
    s.summary           = 'Amp.ai client for iOS  applications.'
    s.homepage          = 'https://github.com/ScaledInference/Amp-iOS-SDK.git'
    s.authors           = { 'Steve Mask' => 'steve@scaledinference.com', 'Olha Prokopiuk' => 'olha@scaledinference.com'}
    s.license           = { :type => 'MIT', :file => 'LICENSE' }

    s.platform          = :ios, '9.0'
    s.swift_version     = '5.0'

    s.source            = { :git => 'https://github.com/ScaledInference/Amp-iOS-SDK.git', :tag => 'v1.2.1' }
    
	s.dependency 'SQLite.swift', '0.12.0'
    s.ios.vendored_frameworks = 'AmpiOS.framework'
end
