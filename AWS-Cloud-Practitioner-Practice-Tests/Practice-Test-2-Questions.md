# AWS Certified Cloud Practitioner — Practice Test 2

50 questions. Single-answer unless marked **(Choose TWO)**. Answers are in
[Practice-Test-2-Answers.md](Practice-Test-2-Answers.md).

---

**Q1.** Which cloud computing benefit refers to the ability to launch resources within minutes instead of waiting weeks for procurement of physical hardware?
A) Go global in minutes
B) Increase speed and agility
C) Stop guessing capacity
D) Trade capital expense for variable expense

**Q2.** A company currently overprovisions servers for anticipated peak traffic that rarely occurs, wasting money most of the year. Which cloud benefit directly addresses this problem?
A) Stop guessing capacity
B) Go global in minutes
C) Massive economies of scale
D) Increase speed and agility

**Q3.** What does "massive economies of scale" mean in the context of AWS pricing?
A) Prices increase as more customers use AWS
B) Aggregated usage from millions of customers allows AWS to lower costs and pass savings to customers
C) Only enterprise customers benefit from lower prices
D) AWS charges a flat rate regardless of usage

**Q4.** Which AWS Cloud Adoption Framework (CAF) perspective focuses on architecture patterns and technology best practices for building solutions on AWS?
A) Business perspective
B) People perspective
C) Platform perspective
D) Governance perspective

**Q5.** Which Well-Architected Framework pillar focuses on using computing resources efficiently to meet requirements and maintaining that efficiency as demand and technology evolve?
A) Reliability
B) Performance Efficiency
C) Cost Optimization
D) Security

**Q6.** Which Well-Architected Framework pillar was added to address minimizing the environmental impacts of running cloud workloads?
A) Operational Excellence
B) Sustainability
C) Reliability
D) Security

**Q7.** A company must keep its data within a specific country due to data residency regulations. Which AWS concept lets them control exactly where their data is stored?
A) Edge locations
B) Region selection
C) Availability Zones only
D) AWS Global Accelerator

**Q8.** What is the primary purpose of having multiple, physically separated Availability Zones within a Region?
A) To reduce the cost of compute resources
B) To provide fault isolation so a failure in one AZ doesn't affect others
C) To allow unlimited free data transfer
D) To increase the maximum size of EC2 instances

**Q9.** Which of the following best defines an AWS Edge Location?
A) A full AWS Region with EC2 and RDS services
B) A site used by CloudFront and Route 53 to cache content and route users to the nearest location for lower latency
C) A backup Availability Zone used only during disaster recovery
D) A private on-premises data center connected via Direct Connect

**Q10.** A finance team compares the cost of running an application on-premises for 5 years (hardware, power, cooling, staff) versus running it on AWS. What are they calculating?
A) Total Cost of Ownership (TCO)
B) Return on Investment (ROI) only
C) Free Tier eligibility
D) Consolidated billing savings

**Q11.** Which statement is true regarding SaaS applications such as Amazon Chime or Amazon WorkMail?
A) The customer must patch the underlying operating system
B) The customer only needs to configure the application within the confines the provider allows; the provider manages everything underneath
C) The customer manages the network infrastructure
D) The customer is responsible for scaling the compute layer

**Q12.** Which of the following is an example of increasing "speed and agility" using AWS?
A) A developer provisions a test server in minutes instead of submitting a hardware request that takes weeks
B) A company signs a 5-year data center lease
C) A company purchases physical servers for a new project
D) A company waits for a vendor to ship new hardware

**Q13.** Under the Shared Responsibility Model, for an "abstracted" service like Amazon S3 or DynamoDB, what is AWS responsible for beyond the usual infrastructure layer?
A) Nothing additional — the model is identical to EC2
B) AWS also operates the platform, operating system, and network configuration; the customer manages data, access policies, and client-side encryption
C) The customer must patch the DynamoDB engine
D) The customer manages the physical servers running DynamoDB

**Q14.** Which IAM policy type is attached directly to a single user, group, or role and applies only to that entity (not reusable across multiple entities)?
A) AWS managed policy
B) Customer managed policy
C) Inline policy
D) Resource-based policy

**Q15.** Which service helps identify resources in your account that are shared with an external entity, helping you find unintended public or cross-account access?
A) AWS IAM Access Analyzer
B) Amazon GuardDuty
C) AWS Trusted Advisor
D) AWS Config

**Q16.** Which service would you use to add user sign-up, sign-in, and access control to a web or mobile application without building that functionality yourself?
A) AWS IAM
B) Amazon Cognito
C) AWS Directory Service
D) AWS Single Sign-On

**Q17.** Which service uses machine learning to automatically discover, classify, and protect sensitive data such as personally identifiable information (PII) stored in Amazon S3?
A) Amazon Macie
B) Amazon Inspector
C) AWS Config
D) Amazon GuardDuty

**Q18.** Which service allows you to centrally configure and manage firewall rules, such as AWS WAF rules and Shield Advanced protections, across multiple AWS accounts?
A) AWS Firewall Manager
B) AWS Organizations
C) AWS Control Tower
D) AWS Config

**Q19.** Which service provides dedicated hardware security modules (HSMs) for generating and managing cryptographic keys to meet strict compliance requirements?
A) AWS KMS only
B) AWS CloudHSM
C) AWS Secrets Manager
D) AWS Certificate Manager

**Q20.** Which service continuously records configuration changes to your AWS resources and can evaluate them against desired configuration rules for compliance?
A) AWS CloudTrail
B) AWS Config
C) Amazon CloudWatch
D) AWS Trusted Advisor

**Q21.** Which service records API calls made within your AWS account (who did what, when, and from where) for governance, compliance, and operational auditing?
A) AWS Config
B) AWS CloudTrail
C) Amazon CloudWatch
D) AWS X-Ray

**Q22.** A company wants to allow its partner's AWS account to assume a role in the company's account to perform specific actions, without creating IAM users for the partner. What should they configure?
A) A cross-account IAM role with a trust policy
B) A shared root user
C) A public S3 bucket policy
D) An IAM group shared across accounts

**Q23.** Which of the following is issued and managed for free to provide SSL/TLS certificates for use with AWS services like CloudFront and Elastic Load Balancing?
A) AWS Certificate Manager (ACM)
B) AWS KMS
C) AWS Secrets Manager
D) AWS CloudHSM

**Q24. (Choose TWO)** Which of the following are examples of encryption options customers can use to protect data in AWS?
A) Server-side encryption using AWS KMS-managed keys
B) Client-side encryption before uploading data to AWS
C) Disabling all IAM policies
D) Making all S3 buckets public
E) Removing MFA requirements

**Q25.** Which AWS Organizations feature allows an administrator to restrict which AWS services or actions member accounts are permitted to use, even if an IAM policy within that account would otherwise allow it?
A) Consolidated billing
B) Service Control Policy (SCP)
C) IAM permissions boundary
D) Resource groups

**Q26.** Which compute service lets developers run containerized applications without managing the underlying EC2 instances, using a serverless launch type?
A) Amazon ECS with the EC2 launch type
B) AWS Fargate
C) Amazon Lightsail
D) AWS Elastic Beanstalk only

**Q27.** Which AWS service is best suited for a developer who wants a simple way to launch a pre-configured virtual private server (with a predictable monthly price bundling compute, storage, and data transfer) for a small blog or website?
A) Amazon EC2 with Reserved Instances
B) Amazon Lightsail
C) AWS Outposts
D) AWS Batch

**Q28.** Which EC2 purchasing option is billed hourly/per-second but reserves an entire physical server for your exclusive use, often needed to meet certain licensing or compliance requirements?
A) Spot Instance
B) Dedicated Host
C) On-Demand Instance
D) Reserved Instance

**Q29.** Which networking component allows instances in a private subnet to initiate outbound traffic to the internet (e.g., to download updates) while preventing unsolicited inbound connections from the internet?
A) Internet Gateway
B) NAT Gateway
C) Virtual Private Gateway
D) Egress-Only VPC Peering

**Q30.** Which VPC feature enables direct, private network routing between two VPCs, making resources in each VPC appear as if they are on the same network?
A) VPC Peering
B) AWS Direct Connect
C) AWS Transit Gateway hub only
D) Amazon Route 53 Resolver

**Q31.** A company wants to connect dozens of VPCs and on-premises networks together through a single, central hub instead of managing many individual peering connections. Which service simplifies this?
A) VPC Peering
B) AWS Transit Gateway
C) Amazon Route 53
D) AWS Direct Connect Gateway only

**Q32.** Which S3 feature keeps multiple variants of an object in the same bucket, protecting against accidental overwrites or deletions?
A) S3 Versioning
B) S3 Lifecycle policies
C) S3 Object Lock
D) S3 Transfer Acceleration

**Q33.** Which S3 feature automatically and asynchronously copies objects from a bucket in one Region to a bucket in a different Region, useful for compliance or lower-latency access?
A) S3 Cross-Region Replication (CRR)
B) S3 Intelligent-Tiering
C) S3 Select
D) S3 Batch Operations

**Q34.** Which RDS feature provides synchronous replication to a standby instance in a different Availability Zone, primarily for high availability and automatic failover — not for offloading read traffic?
A) Read Replica
B) Multi-AZ deployment
C) Aurora Global Database
D) RDS Proxy

**Q35.** Which RDS feature creates a read-only copy of a database to offload read traffic from the primary instance and improve read scalability?
A) Multi-AZ deployment
B) Read Replica
C) Automated backups
D) DB snapshot

**Q36.** Which DynamoDB feature allows a table to be replicated across multiple AWS Regions, providing fast, local read/write access to users worldwide?
A) DynamoDB Streams
B) DynamoDB Global Tables
C) DynamoDB Accelerator (DAX)
D) DynamoDB On-Demand capacity

**Q37.** Which service is an extremely large-scale data migration solution, delivered as a truck carrying a data center's worth of storage, intended for exabyte-scale transfers?
A) AWS Snowball Edge
B) AWS Snowmobile
C) AWS DataSync
D) AWS Storage Gateway

**Q38.** Which monitoring service collects metrics and logs, and can trigger alarms and automated actions (such as scaling policies) based on resource utilization?
A) AWS CloudTrail
B) Amazon CloudWatch
C) AWS Config
D) AWS X-Ray

**Q39.** Which service provides a unified interface to view operational data, automate operational tasks, and manage EC2 instances at scale (e.g., Patch Manager, Session Manager, Run Command)?
A) AWS OpsWorks
B) AWS Systems Manager
C) AWS Config
D) Amazon Inspector

**Q40.** Which fully managed message queuing service decouples the components of an application so they can be scaled and processed independently?
A) Amazon SNS
B) Amazon SQS
C) AWS Step Functions
D) Amazon EventBridge

**Q41.** Which service is a fully managed publish/subscribe (pub/sub) messaging service used to fan out notifications to multiple subscribers, such as email, SMS, or Lambda functions?
A) Amazon SQS
B) Amazon SNS
C) Amazon MQ
D) AWS Step Functions

**Q42.** Which service lets you create, publish, maintain, and secure APIs at scale, acting as a "front door" for applications to access backend services like Lambda?
A) Amazon API Gateway
B) AWS AppSync only
C) Elastic Load Balancing
D) Amazon CloudFront

**Q43.** Which service helps coordinate multiple AWS Lambda functions and other AWS services into visual workflows for building distributed applications?
A) AWS Step Functions
B) Amazon SWF only
C) AWS Batch
D) Amazon EventBridge

**Q44.** Which pricing model allows customers to commit to a consistent amount of compute usage (measured in $/hour) for a 1- or 3-year term, in exchange for lower prices than On-Demand, while retaining flexibility to change instance family, size, OS, or Region?
A) Reserved Instances
B) Savings Plans
C) Spot Instances
D) Dedicated Hosts

**Q45.** A customer wants to purchase third-party software, such as security tools or data analytics applications, that are pre-configured to run on AWS and billed through their existing AWS account. Where should they go?
A) AWS Marketplace
B) AWS Artifact
C) AWS Partner Network directory only
D) Amazon S3

**Q46.** Which free tool helps customers estimate the monthly cost of AWS services before they provision any resources?
A) AWS Cost Explorer
B) AWS Pricing Calculator
C) AWS Budgets
D) AWS Cost and Usage Report

**Q47.** Which billing feature lets you label AWS resources with custom key-value pairs so costs can be broken down and tracked by project, department, or environment in billing reports?
A) Cost allocation tags
B) Consolidated billing
C) Service Control Policies
D) Resource Groups only

**Q48.** Which AWS Support plan is the minimum plan that includes access to Trusted Advisor's full set of best-practice checks and unlimited technical support cases via chat/email/phone (24x7)?
A) Basic
B) Developer
C) Business
D) Enterprise On-Ramp only

**Q49.** Which detailed billing report provides the most comprehensive set of AWS cost and usage data, including additional metadata, and can be delivered to an S3 bucket for further analysis (e.g., with Athena)?
A) AWS Cost and Usage Report (CUR)
B) AWS Budgets Report
C) AWS Trusted Advisor Report
D) AWS Compliance Report

**Q50.** A company wants to automatically take action — such as applying an IAM policy that denies further spending — when a budget threshold is breached. Which feature supports this?
A) AWS Budgets Actions
B) AWS Cost Explorer alerts
C) AWS Trusted Advisor notifications
D) Amazon CloudWatch billing dashboard only
